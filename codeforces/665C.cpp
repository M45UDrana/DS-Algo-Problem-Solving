#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int n = s.size();
    char a = 'a';
    for(int i = 1; i < n; i++)
    {
        if(s[i] == s[i-1])
        {
        	if(i!=n-1)
        	{
            	if(s[i] == a or s[i+1] == a)
             	   a++;
          	  if(s[i] == a or s[i+1] == a)
            	    a ++;
             }
             else if(s[i] == a)
             	a++;
             
            s[i] = a;
        }
        a = 'a';
    }
    cout << s << endl;
    return 0;
}