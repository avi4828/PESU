import sys
#1.access system informaion
#
#print(f'python version {sys.version},operating system {sys.platform}')


#command line arguments
#that was give a path
# print(f'command line argument are : {sys.argv}')

#display module search path
#where a python a file are that find
# print(f'Module search path id {sys.path}')

#simulate command line arguments
#give a any values in arguments
#sys.exit(1) give a in progrma have a error 
# sys.argv=['prog1.py','avi']
# if len(sys.argv)<2:
#     print('please provire a name as argument')
#     sys.exit(1)
# else:
#     name=sys.argv[1]
#     print(name)


#standerd input
#this is a normal a input in system
# print('enter user name :')
# user_input=sys.stdin.readline().rstrip('\n')
# print(user_input)


#standerd output
#this is a normal a output in system
# sys.stdout.write(user_input+'\n\n')

#standerd output
#this is a normal a error in system
# sys.stderr.write('this is a error message\n')



#size of data 
num=12345
l=[1,2,3,4,5,6,7,8,9,10]
s={1,2,3,4,5,6,7,8,9,10}
t=(1,2,3,4,5,6,7,8,9,10)
d={0:1,1:2,2:3,3:4,4:5,5:6,6:7,7:8,8:9,9:10}
s='this is a sentence.'
print(f'the size of number :{num} is {sys.getsizeof(num)}')
print(f'the size of list is {sys.getsizeof(l)}')
print(f'the size of Set is {sys.getsizeof(s)}')
print(f'the size of tuple is {sys.getsizeof(t)}')
print(f'the size of dic is {sys.getsizeof(d)}')
print(f'the size of string is {sys.getsizeof(s)}')
