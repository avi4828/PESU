# 1. convert all word in a given list uppercase and to create new list
# 2. create list of all number data divisible by 2 and 3 between one and 15
# 3. given a list of string create new list with a string and lenth
# 4. extract all lower case latter form a string in to a set
# 5. given a sentenct create a set of all word that are longer than 4 charcater
# 6. build set squery of number between 1 to 25 that are odd (squares should be odd not a number)
# 7. given a string create dict of each chartear and its count 
# 8. form of dict student of score create a new dict of strucets who have got 70 and above
# 9. given stentenct count how many time each word apper in store in dict
# 

print('\n\n')

# 1.
# l=[a.lower() for a in ['APPLE','BANNA']]
# print(list(l))


# 2.
# l=[x for x in range(50) if x%2==0 or x%3==0]
# print(list(l))

# 3.
# l1 = [[a,len(a)]for a in ['APPLE','BANANA'] ]
# print(l1)

# 4
# s={a for a in 'This Is a Class' if a.islower()}
# print(s)

# 5.
# s1 = {a for a in 'this is a python classes'.split() if len(a) > 4}
# print(s1)


# 6.
# s = {a**2 for a in range(25) if (a**2)%2 !=0 }
# print(s)


# 7.
# s='this is python class'
# d = {a:s.count(a) for a in s}
# print(d)

# 8.
# d={'c':75,'a':80,'b':90}

# print(d)

# d = {'a': 1, 'b': 2, 'c': 3}
# swapped = {v: k for k, v in d.items()}
# print(swapped)

ascii_values = [ord(ch) for ch in 'abcdefghijklmnopqrstuvwxyz']
print(ascii_values)



print('\n\n')