import pandas as pd

df = pd.read_excel("attendance.xlsx")

df["AttendancePercent"] = (df["DaysPresent"] / df["TotalDays"]) * 100
df["AttendanceStatus"] = df["AttendancePercent"].apply(
    lambda x: "Shortage" if x < 75 else "OK"
)

df.to_excel("attendance_report.xlsx", index=False)
