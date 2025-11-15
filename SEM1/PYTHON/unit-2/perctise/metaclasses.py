print('\n')


# metaprogramming
# 
# 
# meta class
# use type
# /
# def greet(self):
#     print(f'hello, {self.name}')
    
# #  create a class at run time
# student = type('Student',(object,),{'greet':greet,'name':'avi'})
# s=student()
# s.greet()

# s1=student()
# s1.greet()



# custom metaclass
# /

# class requiredID(type):
#     '''a new metaclass is created since it inherits from type'''
#     '''every metaclass should inherit from type'''
#     '''becouse type build classes'''
#     def __new__(cls,name,bases,attrs):
#         '''python calls the custom __new__ method '''
#         '''when a new class id created'''
#         '''cls repersents the metaclass'''
#         '''name - class name thet is being created'''
#         '''bases - tuple of base class'''
#         '''attrs - dictinoary of attribute and method'''
#         '''found in the class created'''
#         if 'id' not in attrs:
#             '''checking whether the attribute declared inside the class contain ID'''
#             '''if the class has no attribute ID '''
#             attrs['id'] = 0
#             '''defult attribute of id id insertd into the class and the new class is created'''
#             '''the defult value for the attribute created is 0'''
            
#         return super().__new__(cls,name,bases,attrs)
#         # '''the type class handels the actual creation ofthe class'''
#         # '''the modify attribute are passed so that the new class is include them'''

# # -----------------------------------------------------

# # create ordinary classes the use the custom metaclass
# class student(metaclass=requiredID):
#     '''a new class student defined
#     the keyword argument metaclass = requiredID tells python to use requireID to create 
#     this class insteaed of the defult type class
#     name is student
#     bases is empty tuple - no inheritances
#     attrs is {'modul':'main','qualname':'student','init':<dfunction>...}
#     requireID check the attrs dictionary for id 
#     if its is missing it inserts an attribute id with value 0
#     '''
#     def __init__(self,name):
#         self.name = name
        


# # create an object

# s1 = student('abc')
# print(s1.name,s1.id)
# s1.id = 70
# print(s1.id)


# class teacher(metaclass=requiredID):
#     '''name = teachre
#     bases = empty tuple
#     '''
#     id = 120
#     def __init__(self,name):
#         self.name = name
#     '''
#     attrs is {'modul':'main','qualname':'student','init':<dfunction>...,'id':120}
#     '''
    
    
# t = teacher('xyz')
# print(t.name,t.id)





# custom metaclass

class cmeta(type):
    def __new__(cls,name,base,dct):
        print(f'createing the class {name}')
        dct['created_by'] = 'cmeta'
        '''adding a new attribute called as created by with defult value cmeta'''
        return super().__new__(cls,name,base,dct)
    
class ex(metaclass = cmeta):
    def greet(self):
        print('hello from exampleA')

class exb(ex):
    def greeet(self):
        print('hello from ex B')


print(ex().greet())
print(exb().greet())
print(ex().created_by)




# inhering from class thet is create by a custom meta class causes the inherited class to be created by the custom meta class and not type














print('\n')