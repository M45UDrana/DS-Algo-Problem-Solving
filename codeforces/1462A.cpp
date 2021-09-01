#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);
 
int main()
{
    IO;
    int t; cin >> t;
    while(t--)
    {
		int n; cin >> n;
		int a[n];
		for(int i = 0;i < n; i++)
			cin >> a[i];
		int l = 0, r = n-1;
		while(l <= r)
		{
			cout << a[l] << " ";
			l++;
			if(l <= r)
				cout << a[r] << " ";
			r--;
		}
		cout << endl;
	}
	return 0;
}