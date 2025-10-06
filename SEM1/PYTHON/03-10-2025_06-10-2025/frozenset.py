#forzenset
#this is one type of set but do not change any thing

a=(1,2,3,4,5)
fset=frozenset(a)
fset1=frozenset({4,5,6,7,8})
print(fset,fset1)

print(fset.union(fset1))
print(fset.difference(fset1))
print(fset.intersection(fset1))
print(fset.symmetric_difference(fset1))
print(fset|fset1)
print(fset&fset1)
