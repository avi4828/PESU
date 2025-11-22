print('\n\n')


# list comperhesions in python can be used to generate more varied sequence
# list comperhesions meand that make a syntext sorter that normal one 
# systext
# [<expr> for <variable> in <iterable>]

# -----------------------------------------------------------------------------
#List
# this is a normal comperhaesion list
# l1 = ['hello'for x in range(5)]
# print(l1) 
# l = [a**2 for a in [1,2,3,4,5,6,7,8,9,10]]
# print(l) 

# ================
# set
# s={a**2 for a in (1,2,3,4,5,6,7,8,9,10)}
# print(s)


# -----------------------------------------------------------------------------
#List
# conditional list comperhension
# new_list = [expression for variable in iterable if condition == true]
# n=[1,2,3,4,5,6,7,8,9,10]
# se = [x**2 for x in n if x % 2 == 0]
# print(se)

# ================
# set
# s = {a**2 for a in [1,2,3,4,5,6,7,8,9,10] if a%2 !=0}
# print(s)

# -----------------------------------------------------------------------------
# List
# nested list comprehesion
# [expression for element in outer_list for sub_element in inner_list]
# 
# l = [[a for a in range(2)]for b in range(3)]
# print(l)

# matrix = [[1,2,3],[4,5,6],[7,8,9]]
# l = [a for row in matrix for a in row]
# print(l)

# ================
# set
# s={(a,b) for a in [1,2,3,4] for b in ['a','b','c','d']}
# print(s)



# -----------------------------------------------------------------------------
# List
# nested list comprehesion can also have condition
# [expression for item1 in iterable1 
#   if condition1
#       for item2 in iterable2 if condition2]

# matrix = [[1,2,3],[4,5,6],[7,8,9]]
# l=[a for row in matrix for a in row if a%2!=0]
# print(l)

matrix = [[1,2,3],[4,5,6],[7,8,9]]
l=[[a*2 if a%2 == 0 else a for a in row]for row in matrix]
print(l)

# ================
# set
# a={1,2,3,4,5}
# b={6,7,8}
# s={(x,y) for x in a for y in b if (x+y)%2==0}
# print(s)



# -----------------------------------------------------------------------------
# dict
# simple
# {key_experssion:value_experssion for item in iterable}
# d={a:a**2 for a in [1,2,3,4,5]}
# print(d)



# -----------------------------------------------------------------------------
# conditional 
# {key_experssion:value_experssion for item in iterable if condition}

# d={a:a**2 for a in [1,3,3,4,5,6,7,8,9,10] if a%3!=0}
# print(d)


# -----------------------------------------------------------------------------
# nested 
# syntext
# {key_expession:
#   {inner_key_expression:
#       inner_value_expression for inner_item in inner_iterable}
#  for outer_item in outer_iterable}

# s='ABC'
# d={x:{y:x+y for y in s}for x in s}
# print(d)


# -----------------------------------------------------------------------------
#nested conditional dict
# syntext
# {key_expression:
#   value_expression for item in trerable1
#       if condition1
# for item2 in iterable2 if condition2}

# n={x:{y:('EVEN' if y%2==0 else 'ODD') for y in range(1,6)}for x in range(1,4)}
# print(n)







print('\n\n')