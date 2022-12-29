#include <iostream>
#include <vector>

using namespace std;

bool isSumOdd(int a, int b)
{
    if ((a + b) % 2 != 0)
        return true;
    return false;
}

bool isArrayOdd(vector a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] % 2 == 0)
            return false;
    }
    return true;
}

bool HopThe(vector a, int flag)
{
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if (isSumOdd(a[i], a[j]))
            {
                a.push_back((a[i] + a[j]));
                a.erase(a.begin() + i);
                a.erase(a.begin() + j);
                flag++;
                if (isArrayOdd(a))
                {
                    cout << flag << endl;
                    return true;
                }
            }
        }
    }
}
int main()
{
    int t, x;
    int flag = 0;
    int N;
    vector<int> a;
    for (int j = 0; j < t; j++)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> x;
            a.push_back(x);
        }

        if (isArrayOdd(a))
        {
            cout << flag << endl;
            continue;
        }
    }
    return 0;
}