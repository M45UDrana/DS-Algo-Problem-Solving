#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	vector<int> a(n), b(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++)
		cin >> b[i];
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	long long suma = 0, sumb = 0;
	while(a.size() or b.size())
	{
		if(a.size() and b.size())
		{
			if(b.back() >= a.back())
				b.pop_back();
			else
			{
				suma += a.back();
				a.pop_back();
			}
		}
		else if(a.size())
		{
			suma += a.back();
			a.pop_back();
		}
		else b.pop_back();

		if(a.size() and b.size())
		{
			if(a.back() >= b.back())
				a.pop_back();
			else 
			{
				sumb += b.back();
				b.pop_back();
			}
		}
		else if(b.size())
		{
				sumb += b.back();
				b.pop_back();
		}
		else if(a.size())
		   	a.pop_back();
	}
	cout << suma - sumb << endl;
    return 0;
}