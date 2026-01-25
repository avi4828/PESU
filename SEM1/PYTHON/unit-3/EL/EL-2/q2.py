import csv

area = {}

with open("daily_sales.csv", newline="") as f:
    rd = csv.DictReader(f)
    for r in rd:
        reg = r["Region"]
        area[reg] = area.get(reg, 0) + float(r["Amount"])

with open("region_sales.csv", "w", newline="") as f:
    wr = csv.writer(f)
    wr.writerow(["Region", "TotalSales"])
    for r, t in area.items():
        if t >= 50000:
            wr.writerow([r, t])
