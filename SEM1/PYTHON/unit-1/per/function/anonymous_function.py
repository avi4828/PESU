# ====syntax====
print('\n\n')
# lambda argument:expression

# THIS fuction was only single line function
# x=lambda a:a*a
# print(type(x),id(x))
# print(x(10))



# *-+----------------

# condition lanbda fuction

# is_even = lambda x: x%2 ==0
# print(is_even(100))

# /------------------------------------------------------------------------------------------------
# multipal argument
# sum = lambda a,b :a+b
# print(sum(10,20))




# ------------------------------------------------------------------------------------
# lambda with map()
# map(callable,iterble)
# callable = lambda function/use define funtion/builtin funtion
# iterable - list tuple set string dic

# l=[1,2,3,4,5]
# l1 = list(map(lambda a:a*a,l))
# print(l1)

# ---------------------------------------------------------------------------------------------
# LENGTH OF STRING
# l2 = list(map(len,['apple','banna','cherry','durian']))
# print(l2)


# --------------------------------------------------------------------------------------------------------
#cube of number using a user define function
# def cube(a):
#     return a*a*a 

# l3=list(map(cube,[1,2,3,4,5,6,7,8,9,10]))
# print(l3)

# -------------------------------------------------------------------------------------------------------------------
# upper = list(map(str.upper,['apple','banna','cherry','durian']))
# print(upper)

# lower = list(map(str.lower,['apple','banna','cherry','durian']))
# print(lower)



# filter(callable,iterable)
# callable is lambda user-define builtin function
# output o to all element of iterable
# it's filter out values

# ---------------------------------------------------------------------
# all even numbers in list
# feven = list(filter(lambda x:x%2 == 0,[1,2,3,4,5,6,7,8,9,10]))
# print(feven)

# ---------------------------------------------------------------------------------
# reduce(callable,iterable)
# callable is lambda user defined bulit in funtion
# output always one value

# sum of all nunbers
# from functools import reduce
# product = reduce(lambda a,b:a*b,list(filter(lambda x:x%2 == 0,[1,2,3,4,5,6,7,8,9,10])))
# print(product)


# -----------------------------------------------------------------------------------
# zip()
# that was marge a two set in 2 pair 
# in this which set have min value that number of pair create
# a=[1,2,3,4,5,6,7,8,9,0]
# b=['a','b','c','d','e','g','h','i','j']
# print(list(zip(a,b)))


# -------------------------------------------------------------------------------------------
# max()
# print(max(1,2,3.0,4))



# -------------------------------------------------------------------------------------------
# min()



# -------------------------------------------------------------------------------------------
# operator
# python has perdefined funtion for many mathemathical logical relational
# add,sub,mul,truediv,floordiv,xor,or_,and_,not_,gt,ge,lt,le,ne,




print('\n\n')