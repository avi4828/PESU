print('\n')

import xml.etree.ElementTree as xml

# create the data
# ṇormally written a list of dictionaries

books = [
    {"title":"a","author":"f","year":1990,"price":100,"category":"Fiction"},
    {"title":"s","author":"g","year":2000,"price":100,"category":"non-Fiction"}
]

# create the root mode
root = xml.Element("bookstore")
# creating an object of elemnt whose 

# Iterate over the list and create a tree

# for b in books:
#     b_elem = xml.Element("Book")
#     # create an instace of element with name book
#     root.append(b_elem)
#     # attach the node to the root node
#     b_elem.set("Category",b['category'])
#     # add an attribute to the node
#     # first parameter = name of the attribure
#     # second parameter = value of the attribute
#     title=xml.SubElement(b_elem,"Title")
#     # create a child node
#     # first parameter = name of the parent
#     # second parameter = name of the child
#     title.text = b['title']
#     # add the information to the child node
#     author=xml.SubElement(b_elem,"Author")
#     author.text = b['author']
#     price=xml.SubElement(b_elem,"Price")
#     price.text = str(b['price'])

# print(type(b_elem),type(b),type(title))
# tree=xml.ElementTree(root)
# cereate an instance of element tree of passing the root node
# print(type(tree))

# create an xml file
# with open("books.xml","wb") as f:
#     tree.write(f)
    # write the tree to the file



# read from a xml file
# tree=xml.ElementTree(file='books.xml')
# get the tree structure from the file
# root=tree.getroot()
# once the tree structure is got 
# get the root node that already exists in the file

# Books=[]
# an empty list to store the data from the xml file

# iterate over the nodes to get the data
# for b in root.findall('Book'):
    # iterates over all nodes that are named Book
    # b_data={}
    # create an empty dictionary to store the each parent and its child values
    # b_data['category']=b.get('Category')
    # creare the frist key value pair
    # the index of the dictionary is represented by the key value of the pair is got from the node
    # for d in b:
    #     b_data[d.tag]=d.text
        # get the child node data
        # tag gets the value of the clid node
        # text gets the value of the child node
    # Books.append(b_data)
    
# print(Books)
# for b in Books:
#     print(b)

# modification of the existing xml file

# get the tree
tree=xml.ElementTree(file='books.xml')
root=tree.getroot()

# change the price of every book
for p in root.iter('Price'):
    # traverse over the inerble object of price
    p_val=int(p.text)
    # type conversion of string to int
    p_val+=50
    p.text=str(p_val)
    # 
# write the changes to the file
with open("books.xml","wb") as f:
    tree.write(f)
    
    
    
    
    
    
    
    
    
# create a emp.xml file that store name age and salary of each employee
# read and modify the existing salary by 5%

    
    
    
    
    
    
    
    
    
    
    
    

print('\n')