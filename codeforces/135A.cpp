#include <iostream>
#include <algorithm>

using namespace std;

int main()
{ 
    int n; cin >> n;
    int a[n];
    int mx = 0, in;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > mx)
        {
            mx = a[i];
            in = i;
        }
    }
    if(mx == 1)
        a[in] = 2;
    else a[in] = 1;
    sort(a, a+n);
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}