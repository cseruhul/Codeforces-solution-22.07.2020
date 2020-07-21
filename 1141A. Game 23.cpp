
/*
Md. Ruhul Amin(Semicolon);
Dhaka University of Engineering & Technology, Gazipur.
Department of CSE
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    int c = 0;

    cin >> n >> m;

    if(m % n == 0)
    {
        if(m == n)
            cout << 0 << endl;
        else
        {
            while((m != n) || n > m)
            {
                if(m % (n * 2) == 0)
                {
                    n = n * 2;
                    c++;
                }
                else if(m % (n * 3) == 0)
                {
                    n = n * 3;
                    c++;
                } else if((m % (n * 2) != 0) || (m % (n * 3) != 0))
                {
                    goto here;
                }
            }

            cout << c << endl;
        }

    }
    else
    {
        here:
        cout << -1 << endl;
    }

    return 0;
}
