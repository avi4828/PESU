print('\n')

# get file name from user want to search
name = input('enter search file name:')
# catch error
try:
    with open(name,'r') as f:
        print(f)
# if file was not found than except catch the error
except FileNotFoundError as E:
    print(f'FileNotFioundError: {E}')


print('\n')