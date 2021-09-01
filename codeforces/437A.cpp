#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    vector<pair<int, char>>v(4);
    for(int i = 0; i < 4; i++)
    {
        string s; cin >> s;
        v[i].first = s.size()-2;
        v[i].second = s[0];
    }
    sort(v.begin(), v.end());
    if(v[0].first*2 <= v[1].first && 
    	v[3].first < v[2].first*2)
        cout << v[0].second << endl;
    else if(v[3].first >= v[2].first*2 &&
    	v[0].first*2 > v[1].first)
        cout << v[3].second << endl;
    else cout << 'C' << endl;
    return 0;
}