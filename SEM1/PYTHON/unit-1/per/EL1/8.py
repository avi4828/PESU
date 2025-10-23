def count_v(a):
    v = 0
    for i in range(len(a)):
        if a[i] in ['a','e','i','o','u']:
            v += 1
    return v

str_a = "this is a python class"
a = count_v(str_a)
print(a)