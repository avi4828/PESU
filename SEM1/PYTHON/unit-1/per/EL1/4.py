from collections import OrderedDict

a = OrderedDict()
n = int(input("enter a number of items:"))

for _ in range(n):
    number = int(input("Enter a number"))
    if number not in a:
        a[number] = None
print(a)
