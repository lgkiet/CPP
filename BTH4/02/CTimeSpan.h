#pragma once
#include<iostream>
using namespace std;
class CTimeSpan
{
private:
    int hour,minutes,second;
public:
    CTimeSpan(int=0,int=0,int=0);
    ~CTimeSpan(void);
    CTimeSpan operator+(const CTimeSpan&);
    CTimeSpan operator-(const CTimeSpan&);
    bool operator<(CTimeSpan&);
    bool operator<=(CTimeSpan&);
    bool operator>(CTimeSpan&);
    bool operator>=(CTimeSpan&);
    bool operator==(CTimeSpan&);
    bool operator!=(CTimeSpan&);
    friend ostream &operator<<(ostream &out,const CTimeSpan &a);
    friend istream &operator>>(istream &in,CTimeSpan &a);
};