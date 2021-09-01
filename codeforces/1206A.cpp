#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	
    int n, a, ans=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
    	cin >>a;
    	ans=max(ans, a);
    }
    
    int m, b, ans1=0;
    cin >> m;
    for(int i=0; i<m; i++)
    {
    	cin >> b;
    	ans1 = max(ans1, b);
    }
    
    cout << ans << " " << ans1 << endl;
    
}