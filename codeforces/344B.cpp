#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c; 
    cin >> a >> b >> c;  
    if(a >= b and a >= c)
    {
        int bc = (b+c)-a;
        if(bc%2 == 0 and bc >= 0)
        {
            bc /= 2;
            cout <<a-(c-bc)<<" "<<bc<<" "<<c-bc<<endl;
            return 0;
        }
    }  
    if(b >= c and b >= a)
    {
        int ca = (c+a)-b;
        if(ca%2 == 0 and ca >= 0)
        {
            ca /= 2;
            cout <<a-ca<<" "<<c-ca<<" "<<ca<<endl;
            return 0;
        }
    } 
    if(c >= a and c >= b)
    {
        int ab = (a+b)-c;
        if(ab%2 == 0 and ab >= 0)
        {
            ab /= 2;
            cout <<ab<<" "<<b-ab<<" "<<c-(b-ab)<<endl;
            return 0;
        }
    }
    cout << "Impossible" << endl;
    return 0;
}