import pandas as pd

df = pd.read_excel("emp_data.xlsx")

hra = df["BasicSalary"] * 0.10
da = df["BasicSalary"] * 0.18
df["GrossSalary"] = df["BasicSalary"] + hra + da

out = df[["EmpID", "Name", "GrossSalary"]]
out.to_excel("emp_salary.xlsx", index=False)
