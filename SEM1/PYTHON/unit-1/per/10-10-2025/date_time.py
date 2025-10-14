#import datetime as d
from datetime import datetime,date,time,timedelta
#get current date and time
# print(f'the Current date time is {datetime.now()}')

#get current date only
# print(f'the current date is {date.today()}')

# get fromatted date and time
#print(f'the current date and time {datetime.now().strftime('%d-%m-%Y  %H:%M:%S')}')

#print(f'the date 7 days form now is {datetime.now()+timedelta(days=-7)}')
#print(f'the date 7 days form now is {datetime.now()+timedelta(weeks=3,hours=6)}')

#formtaed date time
# %a %A -weekday name(abbr , full)
# %w week number
# %d - day of month
# %b %B - month name
# %m - month number
# %y %Y - year (2 digirs, 4 digits)
# %H - 24 hour
# %l - 12 hour
# %p - AM/PM
# %M - minutes (2 digits)
# %s - second (s digits)
# %f - micorseconds (0000 -9999)
# %z %Z - timezone(+HHMM -HHMM Name)
# %j - day of the year (3 digit 0 to 365)
# %U %W week number (first sunday of the year - 0,first sunday of the year - 1)

# cdate = datetime.now()
# fdate = cdate.strftime('%d-%B-%Y')
# print(type(fdate))





