/*
Md. Ruhul Amin(Semicolon);
Dhaka University of Engineering & Technology, Gazipur.
Department of CSE
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long ar[4], a, b, c;
    int i, j;

    for(i = 0; i < 4; i++)
    {
        cin >> ar[i];
    }

    for(i = 0; i < 4; i++)
    {
        for(j = i; j < 4; j++)
        {
            if(ar[i] > ar[j])
            swap(ar[i], ar[j]);
        }
    }

    a = ar[3] - ar[2];
    b = ar[0] - a;
    c = ar[1] - a;

    cout << a << " " << b << " " << c << " " << endl;
    //sort(ar);
//    for(i = 0; i < 4; i++)
//    {
//        cout << ar[i] << "\t";
//    }

    return 0;
}
