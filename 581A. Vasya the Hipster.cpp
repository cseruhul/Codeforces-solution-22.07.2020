/*
Md. Ruhul Amin(Semicolon);
Dhaka University of Engineering & Technology, Gazipur.
Department of CSE
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, d;
    cin >> a >> b;

    if(a > b)
    {
        cout << b;
        d = a - b;
    }
    else
    {
        cout << a;
        d = b - a;
    }

    cout << "  " << d / 2 << endl;

    return 0;
}
