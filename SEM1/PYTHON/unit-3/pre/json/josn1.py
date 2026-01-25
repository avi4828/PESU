print('\n')

# json file handling

import json as j

# load - reads the json file
# loads - reads the dictionary in python
# person='{"name":"John", "age":30, "profession":["HeadMaster","Minister"]}'
# p=j.loads(person)
# print(p)



# with open('data.json','r') as f:
#     data = j.loads(f.read())
    # print(type(data),data)


# print the json object traversing the file
# for name in data:
#     print(f'Name is {name}')
#     print(f'Age is {data[name]["age"]}')
#     print(f'Professions are:{data[name]["perfoession"]}')


# dump - writes the json data into file
# dumps - writes or convert the dictionary to json object
p={"name":"alpha","age":20}
person=j.dumps(p)
print(type(person),person)

# with open('data1.json','w') as f:
#     j.dump(p,f)
    
    
# aum a json file has data of name age, salary and dept write a pro that display highst salary and lowest salary 

# with open('emp.json','r') as f:
#     data = j.loads(f.read())
#     high=0
#     hname=''
#     low=0
#     lname=''
#     for emp in data:
#         s = data[emp]['salary']
#         if s > high:
#             high = s
#             hname = emp
#         if low == 0:
#             low = s
#             lname = emp
#         elif s < low:
#             low = s
#             lname = emp
#     print(f'Employee with highest salary is {hname} and salary is {high}')
#     print(f'Employee with lowest salary is {lname} and salary is {low}')        


# aum a json file has data of name age, salary and dept write a pro that display highst salary and lowest salary 
# display dept wise salary average

# with open('emp.json','r') as f:
#     data = j.loads(f.read())
#     dept_salaries = {}
#     for emp in data:
#         dept = data[emp]['dept']
#         salary = data[emp]['salary']
#         if dept in data[emp]:
#             dept_salaries[dept].append(salary)
#         else:
#             dept_salaries[dept] = [salary]
#     for dept in dept_salaries:
#         avg_salary = sum(dept_salaries[dept]) / len(dept_salaries[dept])
#         print(f'Average salary for dept {dept} is {avg_salary}')



print('\n')