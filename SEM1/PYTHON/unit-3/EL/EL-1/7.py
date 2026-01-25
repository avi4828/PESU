print('\n')

# open file marks.txt in read mode and 7_output.txt in write mode
with open('marks.txt','r') as f ,open('7_output.txt','w') as out:
    for l in f:
        a = l.strip()
        # in try block try to assert a is digit and empty or not
        try:
            assert a.isdigit() and a!=''
            out.write(f'{a}\n')
        # excetp block a cathc a error if mark was invalid
        except Exception:
            print('Invalid mark found')








print('\n')