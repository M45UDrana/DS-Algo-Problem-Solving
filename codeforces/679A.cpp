#include <bits/stdc++.h>

using namespace std;

int main()
{
    int prime[19] = {2,3,4,5,7,9,11,13,17,19,
        23,25,29,31,37,41,43,47,49};
    int cnt = 0;
    for(int i = 0; i < 19; i++)
    {
        cout << prime[i] << endl;
        fflush(stdout);
        string s; cin >> s;
        if(s == "yes")
            cnt++;
    }
    if(cnt >= 2)
        cout << "composite" << endl;
    else cout << "prime" << endl;
    fflush(stdout);
    return 0;
}