/*
Md. Ruhul Amin(Semicolon);
Dhaka University of Engineering & Technology, Gazipur.
Department of CSE
*/

#include<bits/stdc++.h>
using namespace std;

bool compositcheck(int x)
{
    int b = 0, i = 2, limit = sqrt(x);
    for(i; i <= limit; i++)
    {
        if(x % i == 0)
        {
            b = 1;
            break;
        }
    }
            return b;
}

int main()
{
    long long n, x, y;
    cin >> n;

    x = n / 2;
    y = n - x;

    while(1)
    {
        if(compositcheck(x) == 1 && compositcheck(y) == 1 && x + y == n)
            break;
        else
        {
            x++;
            y--;
        }
    }

    cout << x << " " << y << endl;

    return 0;
}
