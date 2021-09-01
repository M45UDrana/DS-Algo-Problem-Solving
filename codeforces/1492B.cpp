#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);


int main()
{
    IO;
	int Case = 1;
	cin >> Case;
    while(Case--)
    {
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		int used[n+1], cur = n;
		memset(used, 0, sizeof(used));
		for(int i = n; i >= 1; i--)
		{
			while(i >= 1 and used[i])
				i--;
			int j = cur - 1;
			while(j >= 0 and a[j] != i)
				j--;
			if(j >= 0)
			{
				for(int k = j; k < cur; k++)
				{
					cout << a[k] << " ";
					used[a[k]] = true;
				}
				cur = j;
			}
		}
		cout << endl;
	}
	return 0;
}