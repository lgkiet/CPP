#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

int main()
{
	Time a;
	a.Display();
	
	Time b(23, 59, 59);
	b.NextSecond().Display();

	Time c(0, 0, 0);
	c.PrevSecond().Display();

	c.setTime(12, 34, 56);
	c.Display();
	return 0;

}
