print('\n\n')

# static and class methos
# @staticmethod
# 

# class maths:
#     @staticmethod
#     def pi():
#         return 3.14159
#     @staticmethod
#     def power(x,y):
#         return x**y
#     @staticmethod
#     def is_even(z):
#         return z%2==0
#     @staticmethod
#     def mul(a,b):
#         return a*b
    
# a=maths()
# print(a.pi())
# print(a.mul(10,20))





# ````````````````````````````````````````````````````````````````````````````````````

# class method

# class newClass:
#     val=10
#     def __init__(self,a):
#         self.a = a
#         print("the object has been create with a value")
#     @classmethod
#     def incr(cls,x):
#         cls.val+=x
#     def show(self):
#         print(f'the object has a value {self.a} and the class hasthe value {newClass.val}')
    
# o=newClass(10)
# o.show()
# o.incr(12)


# new()

class newClass:
    '''a is required since the valeed init'''
    def __new__(cls,*a):
        print('inside __new__ method')
        '''super() refets to the parent of newClass'''
        '''which is built-in objcet class'''
        '''output is new empty instance of cls'''
        i=super().__new__(cls)
        '''it gets passed to init automatically'''
        return i
    def __init__(self,*a):
        print('inside __init__ method')
        self.a = a
        print(self.a)

a=newClass(10,20)

















print('\n\n')