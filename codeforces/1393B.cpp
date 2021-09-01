#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;

int main()
{
	int n; cin >> n;
	int a[N];
	memset(a, 0, sizeof(a));

	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		a[x]++;
	}

	int cnt4 = 0, cnt2 = 0;
	for(int i = 1; i < N; i++)
	{
		int x = a[i];
		cnt4 += x/4;
		x %= 4;
		cnt2 += x/2;
	}

	int q; cin >> q;
	while(q--)
	{
		char c; cin >> c;
		int x; cin >> x;

		if(c == '+')
		{
			a[x]++;
			if(a[x]%4 == 0)
			{
				cnt4++;
				cnt2--;
			}
			else if(a[x]%2 == 0)
				cnt2++;
		}
		else
		{
			if(a[x]%4 == 0)
			{
				cnt4--;
				cnt2++;
			}
			else if(a[x]%2 == 0)
				cnt2--;
			a[x]--;
		}
		
		if(cnt4 > 1)
			cout << "YES" << endl;
		else if(cnt4 == 1 and cnt2 >= 2)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    return 0;
}