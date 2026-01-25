print('\n')

# open file marks.txt in read mode
with open('marks.txt','r') as f:
    for l in f:
        # declear total marks , count of marks and average variable
        total = 0
        avg = 0
        count = 0
        mark = l.strip()
        # in try block try to convert mark into int
        try:
            total += int(mark)
            count += 1
        # catch the value error if mark was invalid 
        except ValueError as e:
            print(f'ValueError: {e}')
    # calculate average
    avg = total / count 
    print(f'average mark: {avg}')








print('\n')