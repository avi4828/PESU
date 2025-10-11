import os
#get the corrent working direcotory
#print(f'the corrent wprking directory is {os.getcwd()}')

#create directory
#in directory have that to give error
#new="avi"
#os.mkdir(new)

#remove a directory
#new="avi"
#os.rmdir(new)

#change a working directory
#new="avi"
#os.mkdir(new)
#in idle do not work
#os.chdir(new)

#list the content of a directory
#os.chdir(new)
#os.mkdir('avi')


#D:\PESU\PESU\SEM1\PYTHON\10-10-2025\avi\dir
#check if path exists
#d='D:/PESU/PESU/SEM1/PYTHON/10-10-2025/avi1/dir'
#if os.path.exists(d):
    #print(f'the path "{d}" exist')
#else:
    #print(f'the path "{d}" not exist')



#join path
#in join path cannot check path was exists or not
#d1='D:/PESU/PESU/SEM1/PYTHON/'
#d2='10-10-2025/avi/dir'
#d=os.path.join(d1,d2)
#print(d)
#if os.path.exists(d):
#    print(f'the path "{d}" exist')
#else:
#    print(f'the path "{d}" not exist')




#path point ot file
#chack a file was here or not
#d='D:/PESU/PESU/SEM1/PYTHON/10-10-2025/avi/dir/avi.txt'
#if os.path.isfile(d):
#    print(f'{d} pointer to a file')
#else:
#    print('there is an error')
    


#points to a directory
#chack a directory was here or not
#d='D:/PESU/PESU/SEM1/PYTHON/10-10-2025/avi/dir'
#if os.path.isdir(d):
#    print(f'{d} points to a directory')
#else:
#    print('there is an error')



#get process id
#that was give proess id current process id 
#print(f'the process id is {os.getpid()}')


#get pertent process
#that was give partent process id 
#print(f'the parent peocess id is {os.getppid()}')





#exists file stat
#give a all information of file data size time etx...
# d='D:/PESU/PESU/SEM1/PYTHON/10-10-2025/avi/dir/avi.txt'
# stats=os.stat(d)
# print(stats)



#---------------->envionment variacles

#a get current user's home directory
# in this was give all Environment varibles form user leptop
# if 'USERPROFILE' in os.environ:
#     home=os.environ['USERPROFILE']
#     print(f'the home directory od the user is {home}')
# else:
#     print('the envrionment variable "USERPROFILE" does not exits')



#rum system command
# r=os.system('ping -n 3 google.com')
# if r==0:
#     print('command successful')
# else:
#     print('command unsuccessful')


#give a dir information
# p=os.popen('dir')
# o=p.read()
# print(f'process output \n {o}')
# p.close()



#get env vairable in dicnory formate
# ev= os.environ
# print('enviorment variacles')
# for k,v in ev.items():
#     print(f'{k} {v}')



