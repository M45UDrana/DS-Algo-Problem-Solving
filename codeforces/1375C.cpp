#include <bits/stdc++.h>

using namespace std;

const int N = 3e5+5;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n; 
		int a[n];

		for(int i = 0; i < n; i++)
			cin >> a[i];

		if(a[0] < a[n-1])
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    return 0;
}