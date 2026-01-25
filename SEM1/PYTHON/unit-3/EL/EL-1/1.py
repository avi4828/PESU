print('\n')

# try to convert line to int
try:
# reading a file t.txt 
    with open('t.txt', 'r') as f:
        # open r mode because we only read txt
        for line in f:
            n = int(line)
            print(f'convert to int: {n}')
# the line was not int than excpet catch the error
except ValueError as e:
    print(f'ValueError:{e}')












print('\n')