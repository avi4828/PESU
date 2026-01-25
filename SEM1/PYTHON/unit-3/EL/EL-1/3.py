print('\n')

try:
    # open file in write mode
    with open('3.txt', 'w') as f:
        # user input
        s = input("Enter txt: ")
        # write to file
        f.write(s)
        print('write in file successfully')
# user have no permission to write a file than except cathc the error
except PermissionError as e:
    print(f'PermissionError: {e}')


print('\n')