print('\n\n')
# class variables
    # shared variables among to all object.

class student:
    '''class variables'''
    school_name = 'pes university'
    def __init__(self,name,age):
        '''instance variables'''
        self.name = name
        self.age = age
    def show(self):
        print(f'the Student {self.name} of {self.age} years belongs to {self.school_name}')

s = student('avi',21)
s1 = student('damu',22)
s.show()
# call class variables using object name 
print(s.school_name)
# call class variables using class name 
print(student.school_name)


# modify using object name that can not modify that was make a copy of variables
s.school_name = 'PESU'
s1.show()
# that or modify class variables using class name
# this modifes the original class variable for all 
student.school_name = 'PESU'
s1.show()

# you can dynamical add a class variables using class name in outside of class and after a define a holw class
# even a object was create before dynamically adding the class variables will still have access to the newly created class variables
student.address = 'rr campus'
print(s.address)



# in inti add attribute for object 
s1.sem = 2
print(s1.sem)
# but that was for only one object init
print(s2.sem)















# instance variables
    # every object has its owb copy of the instance variables
    # instance variables in dynamicaly add new attribute for particular for object 
    # 

































print('\n\n')