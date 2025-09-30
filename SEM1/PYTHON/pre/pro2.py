n = int(input("Enter a number :"))
flag = False
if n==0 or n==1:
    print(n," is not prime nuber")
else:
    for i in range(2,n):
        if n%i == 0:
            flag=True
            break

if flag==True:
    print(n," is not a prime number")
else:
    print(n," is a prime number")