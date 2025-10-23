from collections import Counter
a = input("enter a string")
counter_a = Counter(a)

for c,f in counter_a.items():
    if f > 2 :
        print(f'{c},{f}')