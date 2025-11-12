print('\n\n')
# getter and setters
# getter accessed data members
# setters updata data members
# advantges:
    # security
    # data hiding
    # simplicity
    # aesthetics
    # resuability
    
    
    
    
class std:
    def __init__(self,name,age,phone):
        self.name = name
        self._age = age
        self.__phone = phone
        
    '''getter'''
    def read(self):
        print(f'{self.name} is {self._age}, year and has {self.__phone}')
        
    '''setter'''
    def age_mod(self,a):
        if a < 0 and a>100:
            print('invalid modification')
        else:
            self._age = a
            
    '''setter'''
    def phone_mod(self,p):
        if self._age < 18:
            print('too young')
        else:
            self.__phone = p
            
s=std('avi',21,'iqoo')
s.age_mod(15)
s.read()
s.phone_mod('s')
s.age_mod(20)
s.phone_mod('sony')
s.read()

    


































    
print('\n\n')
