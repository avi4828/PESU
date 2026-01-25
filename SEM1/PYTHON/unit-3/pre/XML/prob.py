# create a emp.xml file that store name age and salary of each employee
# read and modify the existing salary by 5%

import xml.etree.ElementTree as xml

root=xml.Element('Employees')
for i in range(3):
    emp=xml.SubElement(root,'Employee')
    name=xml.SubElement(emp,'Name')
    name.text=input("Enter the name of the employee:")
    age=xml.SubElement(emp,'Age')
    age.text=input("Enter the age of the employee:")
    salary=xml.SubElement(emp,'Salary')
    salary.text=input("Enter the salary of the employee:")

tree=xml.ElementTree(root)
with open("emp.xml","wb") as f:
    tree.write(f)

tree=xml.ElementTree(file='emp.xml')
root=tree.getroot()
for s in root.iter('Salary'):
    s_val=float(s.text)
    s_val+=s_val*0.05
    s.text=str(round(s_val,2))
with open("emp.xml","wb") as f:
    tree.write(f)
