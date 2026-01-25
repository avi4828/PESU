import csv

tot = {}

for fn in ["theory_marks.csv", "lab_marks.csv"]:
    with open(fn, newline="") as f:
        rd = csv.DictReader(f)
        for r in rd:
            rn = r["RollNo"]
            tot[rn] = tot.get(rn, 0) + int(r["Marks"])

with open("final_result.csv", "w", newline="") as f:
    wr = csv.writer(f)
    wr.writerow(["RollNo", "TotalMarks", "Result"])
    for k, v in tot.items():
        res = "Pass" if v >= 40 else "Fail"
        wr.writerow([k, v, res])
