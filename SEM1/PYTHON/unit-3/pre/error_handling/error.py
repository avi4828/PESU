print('\n')

# syntax error
# x=10
# if x==10
# print(x)



# logical error
# def factorial(n):
#     r=1
#     for i in range(1,n):
#         r *= i
#     return r
# factorial(5)


# built-in error
# errors identified in python

# this is give a all type of error in python and that was identified error
# import builtins
# l=[name for name in dir(builtins)
#     if isinstance(getattr(builtins,name),type)
#     and
#     issubclass(getattr(builtins,name),BaseException)]

# for i in l:
#     print(i)



# aritheticerror
# 1.floating point error
# print(1.2-1.0)


# 2. overflow error
import math
# math.exp(1000)
# pow(3.14,1000)

# 
# def factorial(n):
#     r=1
#     for i in range(1,n+1):
#         r *= i
#     return r
# print(factorial(100))


# 3. zero division error
# r=10.0/0.0
# print(r)
# type error
# float divistion error

# r=10/0
# print(r)
# only division error
# no type


# -------------------------------------------------------------------------------------------
# attribute error

# s='hello to error'
# s.reverse()

# class person:
#     def __init__(self,name,age):
#         self.name = name
#         self.age = age
#     def greet(self):
#         print(f'hello my name is {self.name}')
        
# p=person('iron man',45)
# print(p.name,p.city)


# ------------------------------------------------------------------------------------
# assertion error
# def division(a,b):
#     assert b!=0
#     return a/b

# print(division(10,2))
# print(division(10,0.0))
# print(division(10,0))







# -------------------------------------------------------------------------------
# fileExists error
# x mode is insert a file but file was exists that give error
import os
# def create_file(file_path):
#     open(file_path,'x')
#     print(f'file {file_path} created successfully')
    
file_path='newfile.txt'
# create_file(file_path)


# end of file error
# this is error but not inditifer
# f=open(file_path,'r')
# data = f.read()
# print(data)


# file Not found error
# f=open('new.txt','r')
# print('file opend')

# filenot found error can also be identified as IO error:
# it has to be handled as IO error

# try:
#     f=open('new.txt','r')
#     print('file opend')
# except IOError as e:
#     print(e)




# name is error
# a=10
# print(a,b)

# f=fact_d(12)



# type error
# x='10'
# y=10
# print(x+y)




# index error
# l=[1,2,3,4,5,6,7,8,9,10]
# print(l[10])
# s='hello'
# print(s[5])




# key error
# key error can also be hedled as lookup error
# d={'name':'alpha','age':20,'city':'mangalore'}
# print(d['address'])



# values error
# v = int('hello')



# keyboard interrupt erro
# i=input('enter ')



# unbound local error
# def f_cal(n):
#     for i in range(1,n+1):
#         r *= i
#     return r    
    
# print(f_cal(5))






































print('\n')