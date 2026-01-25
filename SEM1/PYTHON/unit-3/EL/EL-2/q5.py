import csv

with open("inventory.csv", newline="") as f, open("reorder_list.csv", "w", newline="") as o:
    rd = csv.DictReader(f)
    wr = csv.writer(o)
    wr.writerow(["ProductID", "ProductName", "Stock"])
    for r in rd:
        if int(r["Stock"]) < int(r["ReorderLevel"]):
            wr.writerow([r["ProductID"], r["ProductName"], r["Stock"]])
