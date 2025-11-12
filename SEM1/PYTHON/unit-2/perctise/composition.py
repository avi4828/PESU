print('\n\n')

# composition is a concept thet models a has a relationship.
# the relationship means that a composite has a component
# is the act of collecting several object together of create a new one 
# 

# colponents class
# class processor:
#     def __init__(self,brand,cores):
#         self.brand = brand
#         self.cores = cores
#     def process(self):
#         print(f'processor running with {self.cores} form {self.brand}')

# class battery:
#     def __init__(self,capacity):
#         self.capacity = capacity
#     def charge(self):
#         print(f'battery charging capacity is {self.capacity}')
#     def dischage(self):
#         print('battery disvharging...')

# class screen:
#     def __init__(self,size):
#         self.size = size
#     def display(self,content):
#         print(f'displaying {content} on {self.size}-inch screen')
        
# class keyboard:
#     def __init__(self,type):
#         self.type = type
#     def typed_key(self,key):
#         print(f'{self.key} pressed on {self.type} keyboard')
        
# class laptop:
#     def __init__(self,brand,model,price):
#         self.brand = brand
#         self.model = model
#         self.price = price
#         # component object
#         self.processor = processor('ryzen 5000',12)
#         self.battery = battery(100)
#         self.screen = screen(15.6)
#         self.keyboard = keyboard('backlit')
#     def turn_on(self):
#         print(f'{self.model} of {self.brand} is turning on...')
#         self.processor.process()
#         '''object of processor class is calling the method defined in the class'''
#     def show_content(self,message):
#         self.screen.display(message)
#         '''object of screen class is calling the method defined in the screen class with an attribure'''
#     def charge_battery(self):
#         self.battery.charge()
#     def use_keyboard(self,key):
#         self.keyboard.typed_key(key)
    
# # composite object creation
# l = laptop('HP','pavilion',73000)
# # instance method calling
# l.turn_on()
# l.show_content('welcome, enjoy the new laptop')
# l.keyboard('esc')
# l.charge_battery()






# ````````````````````````````````````

# chess board composition
# component class
class piece:
    def __init__(self,color):
        self.color = color
        
class pawn(piece):
    def __init__(self,color):
        super().__init__(color)
        self.type= color +' Pawn'
        
class board:
    def __init__(self):
        self.grid = [[None for _ in range(8)]for _ in range(8)]
        
    def initialize_board(self):
        self.grid[1] = [pawn('w') for _ in range(8)]
        self.grid[6] = [pawn('b') for _ in range(8)]
    
    def print_board(self):
        for r in self.grid:
            print([piece.type if piece else '-' for piece in r])
            
# composite class
class game:
    def __init__(self):
        '''component object creation'''
        self.board = board()
        self.board.initialize_board()
        
    def play(self):
        print('initial board')
        self.board.print_board()
        
game().play()



























print('\n\n')