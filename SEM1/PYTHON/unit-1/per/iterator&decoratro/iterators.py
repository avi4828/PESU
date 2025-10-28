print("\n\n")

# python iterator object must have 2 method
# _iter_():
#       
# _next_()

# iterator are work with all type of datatype
# but do not work in number

# l=[1,2,3,4,5,6,7,8,9,10]
# l_iter=iter(l)
# # print(type(l_iter),type(l))
# print(l_iter)
# print(next(l_iter))

# str='PYTHON CLASS'
# s_iter=iter(str)
# print(type(s_iter))
# print(s_iter.__next__())
# print(s_iter.__next__())
# print(s_iter.__next__())
# print(s_iter.__next__())


# 
# import itertools as it
# seq = it.cycle(('a','b','c','d'))

# for _ in range(10):
#     print(next(seq))

# lazy sequence
n=[i for i in range(10**5)]
# print(type(n),n)

n_iter = iter(n)
print(n_iter.__next__())
# print(next(n_iter))


# implement stopiteration

l=[1,2,3,4,5,6]
liter=iter(l)
try:
    while(True):
        print(next(liter))
except StopIteration:
    print("completed")




















print("\n\n")