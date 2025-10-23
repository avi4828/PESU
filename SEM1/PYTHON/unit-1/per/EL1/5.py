
n = int(input("Enter a number of item:"))

thrsloud = int(input("Enter a thrsloud price:"))


for i in range(n):
    print(f"\n\nenter a {i+1} item \n")
    code = input("Enter a Code")
    qty = int(input("\nEnter a qty of item:"))
    price = int(input("\nEnter a price of item"))
    total = qty*price
    if total > thrsloud:
        print(f'item code:{code}, qty:{qty}, price:{price} = total:{total}')
        