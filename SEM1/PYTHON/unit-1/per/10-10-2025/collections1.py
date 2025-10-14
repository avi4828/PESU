from collections import Counter as c
from collections import defaultdict as dd
from collections import OrderedDict as od
from collections import UserDict as ud
from collections import deque
from collections import ChainMap as cm

# l=[1,2,3,4,5,6,7,8,9,10]
# s={1,2,3,4,5,6,7,8,9,10}
# t=(1,2,3,4,5,6,7,8,9,10)
# d={0:1,1:2,2:3,3:4,4:5,5:6,6:7,7:8,8:9,9:10}
# s1='this is a Sentence.'

#that was give count
# print(c(l),'\n')
# print(c(s),'\n')
# print(c(t),'\n')
# print(c(d),'\n')
# print(c(s1),'\n')

# --------------------------------------------------------------------
#default dictionary
#create a dictionary of the valureindict
# def valuesindict():
#     return 'not existing'

# d1=dd(valuesindict)
# d1['a']=1
# d1['b']=1
# print(d1['a'],d1['b'],d1['c'])
# print(type(d1))
# print(d1)


# students=[{'name':'Albus','score':86},
#           {'name':'Bathlida','score':46},
#           {'name':'colin','score':36},
#           {'name':'dedalus','score':86},
#           {'name':'edgecombe','score':45},
#           {'name':'fillius','score':36}
#           ]

# group_by_score=dd(list)
# for s in students:
#     group_by_score[s['score']].append(s)

# for score,s1 in group_by_score.items():
#     print(f'score: {score}')
#     for st in s1:
#         print(f'\t --- {st['name']}')


#-----------------------------------------------------------------------------------------------
#orderd dictonaty

o=od([('a',1),('b',2),('c',3),('d',4)])
# print(o)
# print(type(o))
# -------------------------
#moving a values in an orderd dictionary


#this a given a index values
# o .move_to_end('b')
# print(o)


#reversing of values in an ordered dictionaty
# for k,v in reversed(o):
#     print(f'({k})')


#remove the last key value pair
# print(o.popitem())
# print(o)

#remove the first key value pair
# print(o.popitem(last=False))
# print(o)

# ------------------------------------------------------------------------------------
#User Dirtionary

# class myDict(ud):
#     def get_keys(self):
#         return [key.upper() for key in self.keys()]

# #create an user dictionary
# cd=myDict({'apple':10,'banna':20,'cherry':30})

#access the keys and valuse
# print(cd.get_keys())


# -------------------------------------------------------------
#deque
#create a deque
# my_dq=deque([10,20,30,40,50,])

# insert at rear
# my_dq.append(60)
# print(my_dq)

#insert at front
# my_dq.appendleft(70)
# print(my_dq)

#delete form front
# my_dq.popleft()
# print(my_dq)

#delete from rear
# my_dq.pop()
# print(my_dq)


#----------------------------------------------------------------------------------
#chainmap
#that was connect all in one
#chain map are immutable
d1 = {'a':1,'b':2,}
d2 = {'c':3,'d':4}
d3 = {'e':5,'f':6}
c=cm(d1,d2,d3)
# print(c)

#add a dictonary (chain) ate the front
n_c=c.new_child({'a':7,'b':8})
print(n_c)
# print(n_c['a'])


#print all chain values except first chain
#remove all child
# print(n_c.parents)

#print idividual key pair
# for k,v in c.items():
#     print(k, v)

#only keys
# for l in c.keys():
#     print(l)
    
# only values
# for v in c.values():
#     print(v)



#


