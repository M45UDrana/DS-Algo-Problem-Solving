#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; string s;
        cin >> n >> s;
        int a[n];
        memset(a, 0, sizeof(a));
        vector<int>v;
        int k = n; 
        for(int i = 0; i < n-1; i++)
        {
            if(s[i] == '<')
                v.push_back(i+1);
            if(s[i] == '>' or i == n-2)
            {
                for(int j = (int)v.size()-1; j >= 0; j--)
                {
                    a[v[j]] = k--;
                }
                v.clear();
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(!a[i])
                a[i] = k--;
        }
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;

        memset(a, 0, sizeof(a));
        k = 1;
        for(int i = 0; i < n-1; i++)
        {
            if(s[i] == '>')
                v.push_back(i+1);
            if(s[i] == '<' or i == n-2)
            {
                for(int j = (int)v.size()-1; j >= 0; j--)
                {
                    a[v[j]] = k++;
                }
                v.clear();
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(!a[i])
                a[i] = k++;
        }
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;

    }
    return 0;
}