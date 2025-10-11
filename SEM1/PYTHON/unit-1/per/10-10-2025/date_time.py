from datetime import datetime,date,time,timedelta

#get current date and time
# print(f'the Current date time is {datetime.now()}')


#get current date only
# print(f'the current date is {date.today()}')

# get fromatted date and time
print(f'the current date and time {datetime.now().strftime('%d-%m-%Y  %H:%M:%S')}')



