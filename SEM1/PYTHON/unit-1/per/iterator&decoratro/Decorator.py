print("\n\n")





# def outer(f):
#     print("inside outer")
#     def inner():
#         print("inside inner")
#         f()
#     return inner
# #   inner()
# # 

# def f():
#     print("inside funtion")
    
# # 
# f1=outer(f)
# f1()
# print(f1)


# def divde(x,y):
#     print(x/y)
    
# def outerdiv(f):
#     def inner(x,y):
#         if x<y:
#             x,y=y,x
#         return f(x,y)
#     return inner

# d=outerdiv(divde)
# d(10,12)

# @outerdiv
# def remainder(x,y):
#     return x%y
# remainder(10,12)


# multipla decorator

def split_value(f):
    def inner():
        f1=f()
        s=f1.split()
        return s
    return inner

def upper_case(f):
    def inner():
        f1=f()
        u=f1.upper()
        return u
    return inner

@split_value
@upper_case
def say_hi():
    return "this is a python class !!"

print(say_hi())






























print("\n\n")