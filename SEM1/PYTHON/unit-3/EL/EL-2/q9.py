import pandas as pd

df = pd.read_excel("returns.xlsx")

ok = ["UPI", "CARD", "WALLET"]
good = []
bad = []

for _, r in df.iterrows():
    err = []
    if r["RefundMode"] not in ok:
        err.append("InvalidRefundMode")
    if r["Amount"] <= 0:
        err.append("InvalidAmount")
    if err:
        r["ErrorReason"] = ",".join(err)
        bad.append(r)
    else:
        good.append(r)

pd.DataFrame(good).to_csv("returns_clean.csv", index=False)
pd.DataFrame(bad).to_excel("returns_error_log.xlsx", index=False)
