import pandas as pd

df = pd.read_csv("bus_pass_requests.csv")

def calc(d):
    d = int(d)
    if d <= 5:
        return 400
    if d <= 10:
        return 650
    return 900

df["Fare"] = df["DistanceKm"].apply(calc)
df["Status"] = "Pending"

df.to_excel("bus_pass_status.xlsx", index=False)
df[["ReqID", "StudentID", "Fare"]].to_csv("bus_pass_fare_list.csv", index=False)
