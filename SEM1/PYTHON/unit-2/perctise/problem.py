# 1. create a class called as doc each doc have a name and age dog barks 

class dog:
    def __init__(self,name,age,bark):
        self.name=name
        self.age=age
        self.bark =bark
    def dog_detail(self):
        print(f'I have a {self.name} and that age is {self.age}. that say {self.bark}')
        
d1= dog("asdf",12,'asdf')
d1.dog_detail()