print('\n\n')

# constructors or desconstructors


# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
# constructors
# defulat constructors

# class A:
#     def __init__(self):
#         print("the object has been created")
#     def show(self):
#         print("the object is being show")
    

# a=A()
# print(A())
# a.show()
# b=A()
# print(b)

# parameteris constructors
# class C:
#     def __init__(self,a,b,c):
#         self.a = a
#         self.b = b
#         self.c = c
#         print('the object has been created')
#     def show(self):
#         print(f'the object has the value {self.a}, {self.b}, {self.c}')

# c1=C(10,20,30)
# c1.show()


# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

# destructors

class D:
    def __init__(self):
        print("the object has been created")
    def __del__(self):
        print("the object has been destoroy")
    def show(self):
        print('the object has been show')

# d=D()
# del d
d1=D().__init__()
d1.show()




















print('\n\n')