# import pandas as pd
# import matplotlib.pyplot as mt

# 1. convert timestamp to proper data time formate

# df['Timestamp']=pd.to_datetime(df['Timestamp'],unit='s')
# df.head()

# 2. smooth the temperture

# computing mean on the basis of rolling
# window=5 take the current values and pervious four values
# min_periods = 1 calculation is done immediately
# mead() average is calculated 
# df['Temperature_smooth']=df['Temperature'].rolling(window=5,min_periods=1).mean()

# df.head()

# 3. plot the new graph

# plt.figure()
# plt.plot(df['Timestamp'],df['Temperature'],lable='Raw',alpha=0.5)

# alpha allows transparency in the graph
# 0 - graph is opaque
# 1 - graph is complete transparent

# plt.plot(df['Timestamp'],df['Temperature_Smooth'],lable='smoothened')
# plt.xlable('Time')
# plt.ylable('Temperature (C)')
# plt.lagend()
# plt.xticks(rotation=45)
# plt.tight_layout()
# plt.show()


# 4. generate the inferences
# a. divide the data into two halves

# mid_index = len(df)//2

# b. calculate the mean of each half
# first_half_mean=df['Temperature_Smooth'].iloc[:mid_index].mead()
# second_half_mead=df['Temperature_Smooth'].iloc[mid_index:].mead()
# print(f'mean of first half: {first_half_mean}')
# print(f'mean of second half: {second_half_mean}')

# infrerences
# 1. temperature increases over time - if second_half_mean is larger then first_half_mean
# 2. temperature dereases over time - if second_half_mean is smaller then first_half_mean
# 3. temperature is consistent - if second_half_mean and first_half_mean is nearly the same



# ------------------------------------------------------------------------------------------------------------------------------
# if a single python file is created to perform some tasks, that's called a script
# if a python file is created to store functions, class, and other that called modules
# module is file that .py file
# modules are simply python files, nothig more.

# 






