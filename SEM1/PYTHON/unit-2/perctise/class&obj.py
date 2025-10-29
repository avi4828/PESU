print("\n\n")


# class and object
# in class __ was private function
# in fuction first will we pass a self keyword and any attribute or agrument
# the __init__() this is constructer in python
# self - object that has been created that was store a value by object
# 
class Laptop:
    ''' __init__() is a special menthod that is run automatically when an object is created '''
    def __init__(self,brand,model,price):
        '''self.brand assigns the value to the object created and memory is allocated'''
        self.brand = brand
        self.model = model
        self.price = price
        self.battery = 100
        
        '''even for a fuction for method deso not take any parament self has to pass so 
        that method can be accesed using the dot notation'''
    def turn_on(self):
        print(f'{self.brand},{self.model} is now tured on')
    def turn_off(self):
        print(f'{self.brand},{self.model} is now tured off')
    def update_batter(self,new_level):
        if 0<=new_level<=100:
            self.battery=new_level
            print(f'Battery level updated to {self.battery}')
        else:
            print(f'invalid battery level!! please enter valid value')
    def check_battery(self):
        print(f'Battery is now {self.battery}%')
    def decrease_battery(self,usage):
        if usage<0:
            print('\nuasge amount cannot be nagarive')
        elif self.battery - usage < 0:
            print(f'Battery too low !!! charge the Laptop')
        else:
            self.battery = self.battery - usage
            print(f'Battery Level decreased by {usage}%.current Level is {self.battery}%')
            
# in python a every have a memory
# print(type(Laptop) ,id(Laptop))

# Object
l1 = Laptop('HP','pavilion',74000)
l2 = Laptop('apple','macbook air',120000)
# print(type(l1) ,id(l1))
# print(type(l2) ,id(l2))
# in this a str for price is nothing but a formmated a string 
# in this use str you try to write a all string in one using + likke i own a + l1.mode that time a int value give a error that cannot string and int concat or print
# print(f'i own a {l1.model} of {l1.brand} that costs {str(l1.price)}')
# print(f'i own a {l1.model} of {l1.brand} that costs {l1.price}')

# in this is positional agrument that any argument position was change that addepetd that data type
# and you can not missing any argument that was give a error that means that requered positional argument function
# l3 = Laptop(23000,'hp','vivobook')
# print(type(l3) ,id(l3))
# print(f'i own a {l3.model} of {l3.brand} that costs {l3.price}')
# 
# 

# -----------------------------
# access the method
# l1.turn_on()
# l1.turn_off()
# l2.turn_on()
# l2.turn_off()


# change a value using a method(setting)
# l1.turn_on()
# l1.update_batter(48)



# change existing value (increment and decrement) with method
# l1.check_battery()
# l1.turn_on()
# l1.decrease_battery(10)
# l1.decrease_battery(10)
# l1.check_battery()
# 


































print("\n\n")