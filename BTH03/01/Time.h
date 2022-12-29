#pragma once
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time():hour(0), minute(0), second(0) {};
	Time(int newH, int newM, int newS) 
	: hour(newH), minute(newM), second(newS){};
	Time(const Time& a)
	: hour(a.hour), minute(a.minute), second(a.second) {};
	void setTime(int newH, int newM, int newS) {
		this->hour = newH;
		this->minute = newM;
		this->second = newS;
	};
	void setHour(int newH) {
		this->hour = newH;
	};
	void setMinute(int newM) {
		this->minute = newM;
	};
	void setSecond(int newS) {
		this->second = newS;
	};
	int getHour() {
		return this->hour;
	};
	int getMinute() {
		return this->minute;
	};
	int getSecond() {
		return this->second;
	};
	Time NextSecond();
	Time PrevSecond();
	bool CheckValidTime();
	void Display();



};

