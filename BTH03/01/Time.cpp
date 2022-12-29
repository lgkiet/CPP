#include "Time.h"
#include <iostream>
#include <string>
using namespace std;

Time Time::NextSecond()
{
	Time a(hour, minute, second);
	if (this->hour == 23 && this->minute == 59 && this->second == 59)
	{
		a.setHour(0);
		a.setMinute(0);
		a.setSecond(0);
		return a;
	}
	if (this->minute == 59 && this->second == 59)
	{
		a.hour++;
		a.setMinute(0);
		a.setSecond(0);
		return a;
	}
	if (this->second == 59)
	{
		a.minute++;
		a.setSecond(0);
		return a;
	}
	a.second++;
	return a;
}

Time Time::PrevSecond()
{
	Time a(hour, minute, second);
	if (this->hour == 0 && this->minute == 0 && this->second == 0)
	{
		a.setHour(23);
		a.setMinute(59);
		a.setSecond(59);
		return a;
	}
	if (this->minute == 0 && this->second == 0)
	{
		a.hour--;
		a.setMinute(59);
		a.setSecond(59);
		return a;
	}
	if (this->second == 0)
	{
		a.minute--;
		a.setSecond(59);
		return a;
	}
	a.second--;
	return a;
}

bool Time::CheckValidTime()
{
	if (hour < 0 || hour > 23
		|| minute < 0 || minute > 59
		|| second < 0 || second > 59)
		return false;
	return true;
}

void Time::Display()
{
	string hour = to_string(this->hour);
	string minute = to_string(this->minute);
	string second = to_string(this->second);
	if (this->CheckValidTime() == true)
	{
		if (hour.length() == 1)
			hour = "0" + hour;
		if (minute.length() == 1)
			minute = "0" + minute;
		if (second.length() == 1)
			second = "0" + second;
		cout << hour + ":" << minute + ":" + second << endl;
	}
	else {
		cout << "Invalid Time ! ! !" << endl;
	}
}