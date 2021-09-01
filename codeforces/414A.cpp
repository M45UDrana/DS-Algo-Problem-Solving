#include <iostream>
 
using namespace std;
 
int main()
{ 
    int n, k; cin >> n >> k;
    if(n == 1 and k == 0)
    {
    	cout << 1 << endl;
        return 0;
    }
    if(int(n/2) > k or n == 1)
    {
        cout << -1 << endl;
        return 0;
    }
    int a = (k - (n/2)) + 1;
    cout << a << " " << a*2 << " ";
    n -= 2;
    for(int i = 1; n; i+=2)
    {
        if(i == a or i == a*2 or i+1 == a or i+1 == a*2)
            continue;
        if(n == 1)
        {
            cout << i << " ";
            n--;
        }
        else
        {
            cout << i << " " << i+1 << " ";
            n -= 2;
        }
    }
    cout << endl;
}