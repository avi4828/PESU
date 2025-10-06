#sets
#set id an unorderd collection of unique items
#set difined using {}
#cannot store duplicate values
#methods

s={1,2,3,4,5,(1,2),2}
print(s,type(s))

#use constructure do this
#s=setof()

#add()
#adds an elements
#in add value was present in that not add
#s.add(1)
#print(s)


#pop()
#removes an element in frist position
#s.pop()
#print(s)


#remove()
#remove a element in set of match values
#s.remove(5)
#print(s)


#union
#that was marge a element
s2={5,9,10,11,25,15,10,0}
#s1=s.union(s2)
#print(s1)


#intersection
#that was find match values
#s4=s.intersection(s2)
#s5=s2.intersection(s)
#print(s4,s5)

#difference
#give was differet values
s3=s2.difference(s)
print(s3)


#i cannot sort and inster becaues of set do not have index
