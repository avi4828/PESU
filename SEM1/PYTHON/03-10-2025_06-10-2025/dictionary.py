#dictionary
#is a collection which is unordered , changeable and indexed
#writte  with curly barckets.
#have a key values
#method

d={1:'a'}
#print(d,type(d))

#in this do not have any method of adding values
d[2]='b'
d['c']=3
d[4]={'a':1,'b':2}
print(d)
#print(d[4]['a'])


#get()
#returns the values up to key
#print(d.get(1))
#print(d.get(4).get('b'))


#items()
#returns a list containing a tuple for each
#print(type(d.items()))# give me dict_items
#print(d.items())


#keys
#give a all keys in your dict thay can not give nested keys
#print(d.keys())

#pop()
#removes the element with the key
#d.pop(1)
#print(d)


#popitems()
#remove the last insterted key-values
#d.popitem()
#print(d)


#values
#give all values in dict do not give a keys
print(d.values())
