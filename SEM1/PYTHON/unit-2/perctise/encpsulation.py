print("\n\n")

# encapsuation:- 
# class is an example of encapsulation
# a class combines data and method into a single unit
# python has different levels of restriction that control how data can be accessed and from where

# accessed modifiers:-
# in python you can not use public private and portected 
# in python you write useing a number of underscored
# public:-
    # public var and method do not write any underscored
    # Ex. self.name = name 
    
# private:-
    # that can not accessed out side of class
    # tow underscoed that mean a private
    # Ex. self.__salary = salary
    # when a have a privete data than a method will be public.
    # 
# protected:-
    # it similar to private but it can accessed drive class
    # one underscored that mean a protected
    # Ex. self._project = project
# 

    
# class Emp:
#     def __init__(self,name,dept,salary):
#         self.name = name #public
#         self._dept = dept #protectd
#         self.__salary = salary #private
    
#     def show(self):
#         '''public method to access the data'''
#         print(f'I am {self.name} woring in {self._dept} with salary of Rs {self.__salary}')
        
#     def _display(self):
#         '''protected method to access the data'''
#         print(f'I am {self.name} woring in {self._dept} with salary of Rs {self.__salary}')
        
#     def __see(self):
#         '''private method to access the data'''
#         print(f'I am {self.name} woring in {self._dept} with salary of Rs {self.__salary}')
        
    
# e1 = Emp('avi','webdevlopment',15000)
# object can access public , protected using the underscore
# but cannot access private even ofter using the double undersoce
# print(e1.name)
# print(e1._dept)
# print(e1.__salary)
# e1.show() #public method
# e1._display() #proceted method
# e1.__see() # private method




# ---------------------------------------------------------------------------------
# name mangling
# <obj>._<classname>__<attribute or variable>
# print(e1.name,e1._Emp__salary)



# --------------------------------------------------------------------------------
# encapsulation and inheritance
# class Company:
#     def __init__(self):
#         self.cid = 1
#         self._cnama = 'pesu'
#         self.__caddress = 'Bangalor'
        
# class Emp(Company):
#     def __init__(self,name):
#         self.name = name
#         Company.__init__(self)
#     def show(self):
#         '''private can not access out side the class wether a inheritance and pernt class'''
#         print(f'I {self.name} work in {self._cnama} at {self.__caddress}. the company id is {self.cid}')
    
   
# e1 = Emp('avi')
# e1.show()
        
# in name mangling we can not access private var or method using a chlid class name we can only access using base class























 
print("\n\n")