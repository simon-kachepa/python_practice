##This program I will look at the timedeltas
## The timedelta method is used to calculate time differences

import datetime

today_date = datetime.date.today()

time_delta = datetime.timedelta(days=7) ##Declaring the time delta of 7 days

print(today_date + time_delta) ## Printing the date 7 days from today date

##Also, the delta can be used to get the days till to a certain date or days after a certain date

my_birthday = datetime.date(2024, 10, 16)

till_my_birthday = my_birthday - today_date ##Subtracting today's date from my birthday to get days left
print(till_my_birthday)