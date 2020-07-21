/*

Md. Ruhul Amin(Semicolon);
Dhaka University of Engineering & Technology, Gazipur.
Department of CSE

*/
#include<bits/stdc++.h>
using namespace std;

int count_digit(int n)
{
int c = 0;
    while(n)
    {
        n = n / 10;
        c++;
    }

    return c;
}

int main()
{
    int t, n, c, i = 0;

    cin >> t;

    while(t--){
    int d[5] = {0, 0, 0, 0, 0};
    i = 0;
    cin >> n;
    c = count_digit(n);

    while(i < c)
    {
        if(i == 0)
        {
            d[0] = n % 10;
            //n = n - d[0];
            n = n / 10;
//        cout << "n = " << n << " i = " << i << " d[1] = " << d[1] << endl;
        }
        else if(i == 1)
        {
            d[1] = n % 10;
            d[1] = d[1] * 10;
            //n = n - d[1];
            n = n / 10;
//        cout << "n = " << n << " i = " << i << " d[1] = " << d[1] << endl;
        }
        else if( i == 2)
        {
            d[2] = n % 10;
            d[2] = d[2] * 100;
            //n = n - d[2];
            n = n / 10;
//        cout << "n = " << n << " i = " << i << " d[1] = " << d[1] << endl;

        }
        else if(i == 3)
        {
            d[3] = n % 10;
            d[3] = d[3] * 1000;
            //n = n - d[3];
            n = n / 10;
//        cout << "n = " << n << " i = " << i << " d[1] = " << d[1] << endl;

        }
        else if(i == 4)
        {
            d[4] = n % 10;
            d[4] = d[4] * 10000;
            //n = n - d[4];
            n = n / 10;
//        cout << "n = " << n << " i = " << i << " d[1] = " << d[1] << endl;
        }
        i++;
    }
    c = 0;
    for(i = 0; i < 5; i++)
    {
        if(d[i] != 0)
            c++;
    }

    cout << c << endl;

    for(i = 0; i < 5; i++)
    {
        if(d[i] != 0)
            cout << d[i] << " ";
    }

}

    return 0;
}
