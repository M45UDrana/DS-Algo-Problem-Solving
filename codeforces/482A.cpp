#include <iostream>

using namespace std;
#define run int ag; cin >> ag; if(ag) main()
int main()
{
    int n, k;
    cin >> n >> k;
    int l = 1, r = n;
    bool flg = 1;
    for(int i = 1; i <= n; i++)
    {
        if(k)
        {
            k--;
            if(i%2)
            {
                cout << r-- << " ";
                flg = 0;
            }
            else
            {
                cout << l++ << " ";
                flg = 1;
            }
        }
        else 
        {
            if(flg)
                cout << l++ << " ";
            else cout << r-- << " ";
        }
    }
    cout << endl;
    return 0;
}