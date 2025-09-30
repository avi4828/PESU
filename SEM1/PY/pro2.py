a= int(input("enter a number"))
if a%2==0:
    print("number is even\n div by 6")
    if a%6==0:
        print("yes")
    else:
        print("no")
else:
    print("number is odd \n div by 5")
    if a%5==0:
        print("yes")
    else:
        print("no")