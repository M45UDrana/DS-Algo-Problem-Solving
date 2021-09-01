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
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		int n, x, sum = 0; cin >> n >> x;
		vector<int> v(n);
		for(int i = 0; i < n; i++)
		{
			cin >> v[i];
			sum += v[i];
		}
		if(sum == x)
			cout << "NO" << endl;
		else
		{
			sum = 0;
			cout << "YES" << endl;
			for(int i = 0; i < n; i++)
			{
				sum += v[i];
				if(sum == x)
				{
					cout << v[i+1] << " ";
					cout << v[i] << " ";
					i++;
				}
				else cout << v[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}