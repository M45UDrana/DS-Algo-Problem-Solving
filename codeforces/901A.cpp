#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, n = 0; cin >> h;
    int a[h+1];
    bool ok = false;
    for(int i = 0; i <= h; i++)
    {
        cin >> a[i];
        if(i and a[i-1] > 1 and a[i] > 1)
            ok = true;
        n += a[i];
    }
    if(!ok)
        return !(cout << "perfect" << endl);
    int in = 0;
    vector<int> rt, tr1,tr2;
    rt.push_back(in++);
    for(int i = 0; i <= h; i++)
    {
        int rn = rt.size();
        for(int j = 0; j < a[i]; j++)
            tr1.push_back(rt[j%rn]);
        for(int j = a[i]-1; j >= 0; j--)
            tr2.push_back(rt[0]);
        rt.clear();
        for(int j = 0; j < a[i]; j++)
            rt.push_back(in++);
    }
    cout << "ambiguous" << endl;
    for(int i = 0; i < tr1.size(); i++)
        cout << tr1[i] << " ";
    cout << endl;
    for(int i = 0; i < tr2.size(); i++)
        cout << tr2[i] << " ";
    cout << endl;
    return 0;
}