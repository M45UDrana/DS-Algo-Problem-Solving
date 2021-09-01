#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c; cin >> a >> b >> c;
    int m; cin >> m;
    priority_queue<int,vector<int>, greater<int> > A, B, C;
    string s; 
    for(int i = 0,x; i < m; i++)
    {
        cin >> x >> s;
        if(s == "USB")
            A.push(x);
        else B.push(x);
    }
    long long sum = 0, cnt = 0;
    while(!A.empty() and a--)
    {
        sum += A.top();
        A.pop();
        cnt++;
    }
    while(!B.empty() and b--)
    {
        sum += B.top();
        B.pop();
        cnt++;
    }
    while(!A.empty())
    {
        C.push(A.top());
        A.pop();
    }
    while(!B.empty())
    {
        C.push(B.top());
        B.pop();
    }
    while(!C.empty() and c--)
    {
        sum += C.top();
        C.pop();
        cnt++;
    }
    cout << cnt << " " << sum << endl;
    return 0;
}