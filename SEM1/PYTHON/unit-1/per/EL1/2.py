from collections import Counter

print("Enter a 10 shopping item list\n")
slist = []
for i in range(10):
    item = input(f"Enter a {i+1} item :")
    slist.append(item)
    
count_list = Counter(slist)
max_count = max(count_list.values())

for k,v in count_list.items():
    if v == max_count:
        print(f'most common item is {v} , has {k}')