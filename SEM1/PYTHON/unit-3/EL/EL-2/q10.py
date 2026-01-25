import csv
import pandas as pd

good = []
bad = []

with open("meter_reading.csv", newline="") as f:
    rd = csv.DictReader(f)
    for r in rd:
        u = int(r["CurrentReading"]) - int(r["PreviousReading"])
        if u < 0:
            r["ErrorReason"] = "NegativeUnits"
            bad.append(r)
            continue
        amt = 0
        if u <= 100:
            amt = u * 4
        elif u <= 200:
            amt = 100 * 4 + (u - 100) * 6
        else:
            amt = 100 * 4 + 100 * 6 + (u - 200) * 8
        good.append([r["ConsumerID"], r["Name"], u, amt])

pd.DataFrame(
    good, columns=["ConsumerID", "Name", "Units", "BillAmount"]
).to_excel("bills.xlsx", index=False)

pd.DataFrame(bad).to_csv("billing_errors.csv", index=False)
