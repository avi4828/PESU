# create a base class emp with attrubute name and salary derive class manager that adds attribute department and method to display all information
# mro
# create a root class witch inhe branch 1lefe and 2 final inhet lafe 1,2 each class have method identfy called to final than diaplay mro 







# class Emp:
#     def __init__(self,name,salary):
#         self.name = name
#         self.salary = salary
#     def info(self):
#         print(f'Emp name is {self.name} and salary is {self.salary}')
    
# class Manager(Emp):
#     def __init__(self,name,salary,dept):
#         super().__init__(name,salary)
#         self.dept = dept
#     def info(self):
#         print(f'department is :{self.dept}')
#         return super().info()
        
# e=Emp('a',10000)
# m=Manager('a',10000,'mana')
# m.info()