print('\n')
# 

# exception handling
# identify builtin exceptions

# print(dir(locals()['__builtins__']))


# try and except block
# num=int(input("enter the numerator:- "))
# try:
#     den=int(input("enter the denomicator:- "))
#     re = num/den
#     print(re)
# except:
#     print("error denominator cannot be a zero")    
    
# try:
#     even = [2,4,6,8,10]
#     print(even[4])
#     print(even[5])
# except:
#     print('index is out of bound')

# x=4
# y='hello'
# try:
#     z=x+y
#     print(z)
# except TypeError :
#     print('error : cannot add an int to a string')





# try and except with else block
# try:
#     num = int(input('enter a number :'))
#     assert num%2==0
# except:
#     print('not an even number')
# else:
#     r=num/4
#     print(r)
# catch an exception in try and handle it in except if the exception does not occur execute the remaining statement in else


# try and except and finally block
# try:
#     n=int(input('enter the numerator'))
#     d=int(input('enter the denominator'))
#     r=n/d
#     print(r)
# except:
#     print('error : denominator cannot be zero')
# finally:
#     print('programm terminated')
# finally block get excuted if the exception is occurring and it is handled or it the exception is not occuring



# multiple exception in a sigle try block

try:
    l=[0,2,3,4,5]
    n=l[6]
    # n=l[4]
    d=l[0]
    r=n/d
    print(r)
except ZeroDivisionError as e:
    print(f'ZeroDivisionEror {e}')
except IndexError as e:
    print(f'IndexError : {e}')


















































































print('\n')