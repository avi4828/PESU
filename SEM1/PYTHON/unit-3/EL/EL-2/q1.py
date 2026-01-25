import csv

box = {}

with open("students.csv", newline="") as f:
    rd = csv.DictReader(f)
    for r in rd:
        k = (r["RollNo"], r["Name"])
        box.setdefault(k, []).append(int(r["Marks"]))

with open("student_summary.csv", "w", newline="") as f:
    wr = csv.writer(f)
    wr.writerow(["RollNo", "Name", "AverageMarks", "Result"])
    for (rn, nm), mk in box.items():
        avg = sum(mk) / len(mk)
        res = "Pass" if avg >= 40 else "Fail"
        wr.writerow([rn, nm, round(avg, 2), res])
