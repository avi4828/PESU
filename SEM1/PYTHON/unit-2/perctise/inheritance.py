# inheritance

class Laptop:
    def __init__(self,brand,model,price):
        self.brand = brand
        self.model = model
        self.price = price
        self.battery = 100
    
    def turn_on(self):
        print(f'{self.brand},{self.model} is now tured on')
    
    def turn_off(self):
        print(f'{self.brand},{self.model} is now tured off')
        
    def check_battery(self):
        print(f'Battery is now {self.battery}%')
        
    def decrease_battery(self,usage):
        if usage<0:
            print('\nuasge amount cannot be nagarive')
        elif self.battery - usage < 0:
            print('Battery too low !!! charge the Laptop')
        else:
            self.battery = self.battery - usage
            print(f'Battery Level decreased by {usage}%.current Level is {self.battery}%')
            
            
class GamingLaptop(Laptop):
    '''parent class is Laptop
        child class is gaming loptop
    '''
    
    def __init__(self, brand, model, price,gpu):
        '''intialize the attribute of the parent class'''
        '''call the prent class init method using the object of the child class'''
        super().__init__(brand, model, price)
        '''intialixe tht unique attrivute of the chlid class'''
        self.gpu = gpu;
        
    
    '''unique method of child class'''
    def boost_mode(self):
        print(f'{self.mode} of {self.brand} id running in boost mode')

    '''method inherited from parent class'''
    def turn_on(self):
        return f'{self.model} of {self.brand} is starting in gaming mode with {self.gpu}'
    
# object creation

l1=Laptop('HP','pavilion',74000)
g1 = GamingLaptop('dell','inspiron',55000,'nvidia RTX 4070')

# parent class usage

l1.turn_on()
l1.check_battery()
l1.decrease_battery(10)
l1.check_battery()


# child usage
print(g1.turn_on())
