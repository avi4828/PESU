#recursive function
# python has a bulit-in recursion limit
#
# ---------------------------------------------------------------------------------------------
# def snn(n):
#     if n==0:
#         return 0
#     return n+snn(n-1)

# n=int(input("enter a number:"))
# if n<0:
#     print(f'sum of-{n} number is not possible')
# else:
#     print(f'sun of {n} numbers is {snn(n)}')

# ----------------------------------------------------------------------------------------------
# def factorial(n):
#     if n==0:
#         return 1
#     return n*factorial(n-1)

# n=int(input('enter the numbers:'))
# if n<0:
#     print(f'factorial of {n} is not possible')
# else:
#     print(f'factorial of {n} is {factorial(n)}')

# ----------------------------------------------------------------------------------------
#Greatest common divisor
def gcd(m,n):
    if n==0:
        return m
    return gcd(n,n%m)

a=int(input('enter the first number:'))
b=int(input('enter the second number:'))

print(f'GCD of {a} and {b} is {gcd(a,b)}')