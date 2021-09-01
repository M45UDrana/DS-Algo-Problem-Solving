#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int k = n;;
    priority_queue<int>Q;
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        Q.push(x);
        if(Q.top() == k)
        {
            while(!Q.empty() and Q.top() == k)
            {
                cout << k << " ";
                Q.pop();
                k--;
            }
            cout << endl;
        }
        else cout << endl;
    }
    return 0;
}