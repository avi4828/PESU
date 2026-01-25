print('\n')

# import the moudule
import csv
# read the file
# 1. reader()
# with open('file.csv','r') as f:
#     read = csv.reader(f)
#     for r in read:
#         print(r)
# print(type(f),type(read))

# remove the space after the delimiter
# assuming comma is the default delimiter
# with open('file.csv','r') as f:
#     read = csv.reader(f,skipinitialspace=True)
#     for r in read:
#         print(r)


# change the delimiter and remove the space between the delimiter
# with open('file1.csv','r') as f:
#     read = csv.reader(f,delimiter=';',skipinitialspace=True)
#     for r in read:
#         print(r)

# 2. dictreader()
# with open('file.csv','r') as f:
#     read = csv.DictReader(f)
#     for r in read:
#         print(r)
# print(type(read),type(r))

# remove the spave between the delimiter
# with open('file.csv','r') as f:
#     read = csv.DictReader(f,skipinitialspace=True)
#     for r in read:
#         print(r)

# change the delimiter to ; 
# with open('file1.csv','r') as f:
#     read = csv.DictReader(f,delimiter=';',skipinitialspace=True)
#     for r in read:
#         print(r)


# read the dat from the file that has no header row
# with open('file2.csv','r') as f:
#     name=['Name','Age','Progession']
#     read = csv.DictReader(f,fieldnames=name,delimiter=';',skipinitialspace=True)
#     for r in read:
#         print(r)


# write the data into a CSV file
# write() with writerows()
data=[['Name','Age','City'],
      ['abbot',12,'london'],
      ['Bob',20,'new york'],
      ['chang',13,'machester']
      ]
# with open('out_data.csv','w') as f:
#     write = csv.writer(f)
#     write.writerow(data)


# 2.write() with writerow()

with open('out_data.csv','a') as f:
    write = csv.writer(f)
    write.writerow(['dean',11,'paris'])
    write.writerow(['edger',30,'Geneva'])
    


# asum tha you have a csv file emp_details that has empid,name,dept,salary 
# read tha data and calculate da 18% salary ha 2% and gross which sum of salary and
# wirte tha following data empid salary hra da and groass into a file called as emp_salary.csv

with open('emp_detail.csv','r') as f:
    head = ['Empid','Empname','dept','salary','da','hra','gross']
    read = csv.DictReader(f,fieldnames=head,skipinitialspace=True)
    # for r in read:
    #     print(r)
    # with open('emp_salary.csv','w')as fa:
    #     for r in read:
    #         da = (int(r[3])*18)/100
    #         hra = (int(r[3])*2)/100
    #         gross = int(r[3])+da+hra
    #         r.append(da)
    #         r.append(hra)
    #         r.append(gross)
    #         write = csv.writer(fa)
    #         write.writerows(read)
    





print('\n')