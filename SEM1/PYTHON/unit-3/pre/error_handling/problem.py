# 1. a program shold convert the user input into the interger handling invalid input  
# 2. a funtion couputd squerroot of a number handle nagetive number
# 3. try convert very large float number to intger handling overflow to exceeds tht limis

# 1. 
# try:
#     n=int(input('enter a number:-'))
#     print(n)
# except ValueError as e :
#     print(f'value error : {e}')


# 2.
# import math
# try:
#     n = int(input('enter a number:-'))
#     s = math.sqrt(n)
#     print(s)
# except:
#     print('invalid number is nagetive')


# 3.
try:
    f=1.99999999999999999999999996
    n=int(f)
    print(n)
except OverflowError as of:
    print(f'OverFlowError {of} ')