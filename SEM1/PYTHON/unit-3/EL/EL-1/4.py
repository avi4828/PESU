print('\n')


# reading a file t.txt 
with open('t.txt', 'r') as f:
    # open r mode because we only read txt
    for line in f:
        # try to convert line to int
        # for loop inside try block that to read hole file without stopping
        try:
            n = int(line)
            print(f'convert to int: {n}')
        # the line was not int than excpet catch the error
        except ValueError as e:
            print(f'ValueError:{e}')












print('\n')