# // build class called car intance var model price and class var number of cars 
# // increment a class var each time a new class create print total number of car solud

class car:
    total = 0
    def __init__(self,model,price):
        self.model = model
        self.price = price
        car.total += 1
        
    def show(self):
        print(f'the car is {self.model} and price is {self.price}')
    
    def total_solded(self):
        print(f'a totol number of car soloed is {cls.total}')
        
c1 = car('asdf',123)
c2 = car('asdf',123)
c3 = car('asdf',123)
c4 = car('asdf',123)

c1.show()
c2.show()
c3.show()
c4.show()

print(car.total)



