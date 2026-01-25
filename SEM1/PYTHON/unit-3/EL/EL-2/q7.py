import pandas as pd

df = pd.read_excel("expenses.xlsx")
df["Month"] = pd.to_datetime(df["Date"]).dt.to_period("M")

sumtab = df.groupby(["Month", "Category"])["Amount"].sum().reset_index()
sumtab.to_excel("monthly_summary.xlsx", index=False)
