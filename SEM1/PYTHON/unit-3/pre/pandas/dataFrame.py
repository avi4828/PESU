# data frame consists of three main components
print('\n')

#
import pandas as p

# create a dataframe from a dictinoary
# data = {'name':['amora','Beat','captain America'],
#         'age':[20,25,21],
#         'city:['new york','london','a']
#         }

# df = p.DataFrame(data)
# create an instance of dataframe
# the 
# print(df)

# create a dataframe from list
# data=[['deadpool',30,'paris'],
#       ['elektra',25,'landon'],
#       ['falcon',24,'new']
    # ]

# df1 = p.DataFrame(data)
# print(df1)
# df2=p.DataFrame(data,columns=["Name","Age","city"])
# print(df2)

# df2=p.DataFrame(data,columns=["Name","Age"])
# print(df2)




# create dataframe from file
# df3= p.read_csv('data.csv')
# print(df3)

# create daraframe from file
df4=p.read_json('data.json')
# print(df4)
# import xml.etree.ElementTree as xml


# df5 = p.read_xml('emp.xml')
# print(df5)

# create empty datafream 

# df1=p.DataFrame()
# print(df1)




# inspection of the dataframe
# get the m=number of rows and columns
# print(df4.shape)

# get the columns
# print(df4.columns)

# get the number of rows
# print(df4.index)

# get individual data types
# print(df4.dtypes)
# get the frist 5 row
# print(df4.head())


# get the last five record
# print(df4.tail())

# get n record from the last
# print(df4.tail(3))

# get specific columns
# print(df4['Name'])
# print(df4[['Name','age']])

# get specific rows
# use lable based search
# print(df4.loc[0:3])
# includes first and last record

# use int based index
# print(df4.iloc[0:3]) 
# inclued only frist and covers upto last but not include record


# get specific row and specific column
# a. use lable based index
# print(df4.loc[0:3,['Name','Age']])

# print(df4.loc[0:3,[0,2]])
# 

# b. int based index 
# print(df4.iloc([0:3,['Name','Age']]))
# only work with numbers

# print(df4.iloc[0:3,[0,2]])




print('\n')
