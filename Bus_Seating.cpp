#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
 while (T--)
    {
     int a, b;
    cin >>a>> b;

    if (b <= a)
    {
     cout << 0 << endl;
 }
else
{
cout << (b - a) * 2 << endl;
 }
    }

    return 0;
}