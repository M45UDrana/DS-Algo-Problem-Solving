#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int pos[1001], val[51];
	memset(pos, 0, sizeof(pos));
	memset(val, 0, sizeof(val));
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		pos[x] = i+1;
	}
	for(int i = 1; i <= 1000; i++)
		if(pos[i])
			val[pos[i]] = i;
	vector<int> v;
	for(int i = 1; i <= 50; i++)
		if(val[i])
			v.push_back(val[i]);
	cout << v.size() << endl;
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
	return 0;
}