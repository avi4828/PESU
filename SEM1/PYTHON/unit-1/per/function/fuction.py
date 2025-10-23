#fuction defintion

# def addfuntion(a,b):
#     return(a+b)

#add and contcat a list tuple but not dicnory
# print(addfuntion(10+4j,20+4j))

#-----------------------------------------------

# required argument
# it is required a all parameter and give a missing argument error
# addfuntion(10)

#-----------------------------------------------
# keyword argument
# def printvalue(name,age,city):
#     print(f'{name} , {age} , {city}')
    
    
#in a write a with argument name but also required all
# printvalue(age=10,city='jamnagar',name='avi')



# --------------------------------------------------
# degault argument
# def printvalue(age,city,name='user'):
#     print(f'{name} , {age} , {city}')

#in a defult a value was set in last 
# printvalue(20,'jamnagar')

# ------------------------------------------
# variable lenght argument

# def addvalue(*n):
#     sum=0
#     for i in n:
#         sum+=i
#     return sum

#we can give number of argument 
# print(addvalue(10,20,30,40,50,60,70,80))

# def addvalue(*n,a=0):
#     sum=0
#     for i in n:
#         sum+=i
#     sum+=a
#     return sum

# in other argument you write that time use keyword argument use is reqiered 
# we also can use a defult value argument

# print(addvalue(10,20,30,40,50,a=20))
# print(addvalue(10,20,30,40,50))


#-------------------------------------------------
# pass by reference
# l=[1,2,3,4]
# print(id(l))
# def addvalue(l):
#     print(id(l))
#     l.append(10)
#     print(id(l))

# addvalue(10)

#-----------------------------------------------------

    


















