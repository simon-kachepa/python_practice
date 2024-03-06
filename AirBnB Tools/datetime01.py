## This programs marks the beginning of learning the datetime module in python

import datetime

##Creating date using the date() method
my_date = datetime.date(1997, 10, 16)
print(my_date)

##Creating today date using the today constructor
today_date = datetime.date.today()
print(today_date)
print(today_date.year) ##To print the year of the variable today_date
print(today_date.month)
print(today_date.day)


print(today_date.weekday()) #To print the weekday (Monday = 0 up to Sunday = 6)
print(today_date.isoweekday()) #To print the weekday (Monday = 1 up to Sunday = 7)