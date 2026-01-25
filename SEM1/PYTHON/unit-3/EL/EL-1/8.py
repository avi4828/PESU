print('\n')

with open('expence.txt','r') as f,open('8_output.txt','w') as o:
    for line in f:
        l = line.strip().split(',')
        try:
            assert len(l) >1 and l[0] == ''
            n = int(l[1])
            o.write(f'{n}\n')
        except FileNotFoundError:
            print('FileNotFoundError:File not found as expence.txt')
        except AssertionError:
            print('AssertionError:empty line found or split issues')
        print(l)










print('\n')