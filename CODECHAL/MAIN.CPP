#include <iostream>
using namespace std;

int main()
{
	int T, x;
	cin >> T;
	int *a = new int[T];
	for(int i = 0; i < T; i++)
	{
		cin >> x;
		if(x % 2 == 0){
			a[i] = (x/2) * (x/2);
		}
		else{
			a[i] = (x/2) * ((x/2) + 1);
		}
	}
	
	for (int i = 0; i < T; i++)
	{
		cout << a[i] << endl << endl;
	}
	return 0;
}