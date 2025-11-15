print('\n')


# aggregation is almost exactly like composition.
# the difference is that aggregate object can exist independenly.
# it represent has-a's relationship
# one way relationship
#  /

# class teacher:
#     def __init__(self,name,subject):
#         self.name = name
#         self.subject = subject
#     def teach(self):
#         print(f'{self.name} is teaching {self.subject}')
        
# class school:
#     def __init__(self,name):
#         self.name = name
#         self.teachers = []
#         '''a list to hold all the tacher that teach in this school'''
    
#     def add_teacher(self,teacher):
#         self.teachers.append(teacher)
#         '''adding the tacher objcet that has been already created seperately'''
#         print(f'{teacher.name} has joined {self.name}')
        
#     def show_t(self):
#         print(f'teacher taching at {self.name}')
#         for t in self.teachers:
#             '''treating over the list of teacher'''
#             '''each teacher object it refere through t'''
#             print(f'{t.name} for {t.subject}')

# # create school
# s1 = school('abc school')
# s2 = school('bcd school')

# t1 = teacher('Mr.t1','maths')
# t2 = teacher('Mr.t2','english')
# t3 = teacher('Mr.t3','computer')
# t4 = teacher('Mr.t4','chemistry')

# print('\n')
# s1.add_teacher(t1)
# s1.add_teacher(t2)
# s1.add_teacher(t3)
# s1.add_teacher(t4)

# print('\n')
# s1.show_t()
# print('\n')
# s2.add_teacher(t4)
# s2.add_teacher(t2)
# print('\n')

# s2.show_t()

# student name roll number



# ````````````````````````````````````````````````````````````````````````````````````````````````

# a user has created multipale folder which contain file 
# each file can contain paragraf 
# each paragraf can contain word 
# each word can contain charcters
#  /

# class char:
#     def __init__(self,tc):
#         self.tc = tc
#     def show(self):
#         print(f'charcter is:{self.tc}')
        
# class word(char):
#     def __init__(self, text):
#         self.text = text
        # self.char = [char(c) for c in text.split()]
        










# a smartphone has a camara a display screen and op system create class for the same 
class camara:
    def __init__(self,mp):
        self.mp = mp
    def show(self):
        print(f'camara is {self.mp} mega pixle')
        
class display:
    def __init__(self,inch,dis):
        self.inch = inch
        self.dis = dis

    def show_display(self):
        print(f'display is {self.inch} inch and screen is {self.dis}')
        
class op:
    def __init__(self,processer_name):
        self.processer_name = processer_name
    def show_pro(self):
        print(f'phone have {self.processer_name} processer')

class phone:
    def __init__(self,brand,name,price):
        self.brand = brand
        self.name = name
        self.price = price

    def show_phone(self):
        print(f'phone was {self.brand} , name is {self.name} and price is {self.price}')
    def show_camara(self,mp):
        c = camara(mp)
        c.show()
    def show_display(self,inch,dis):
        d = display(inch,dis)
        d.show_display()
        
    def show_op(self,op_name):
        o = op(op_name)
        o.show_pro()
    
p = phone('vivo','iqoo z7s',15000)
p.show_phone()
p.show_camara(15)
p.show_display(12,'old')





















# a cricte has many cricter thay play match create a class interface for the same  /






















print('\n')