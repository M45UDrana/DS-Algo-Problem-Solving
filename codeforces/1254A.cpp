#include <bits/stdc++.h>

using namespace std;

int main()
{
	string res = "";
	for(char i = '0'; i <= '9'; i++)
		res += i;
	for(char i = 'a'; i <= 'z'; i++)
		res += i;
	for(char i = 'A'; i <= 'Z'; i++)
		res += i;

	int t; cin >> t;
	while(t--)
	{
		int n, m, k, ckn = 0; cin >> n >> m >> k;
		string s[n];
		for(int i = 0; i < n; i++)
		{
			cin >> s[i];
			for(int j = 0; j < m; j++)
			{
				if(s[i][j] == 'R')
					ckn++;
			}
		}
		vector<int>num(k, int(ckn/k));
		ckn -= int(ckn/k)*k;
		for(int i = k-1; i >= 0 and ckn--; i--)
			num[i]++;
		string ans[n];
		for(int i=0,j=0,idx=0,cnt=0; i < n; i++)
		{
			ans[i] = string(m, res[k-1]);
			if(i%2)
			{
				j = m-1;
				while(j >= 0 and num.size())
				{
					ans[i][j] = res[idx];
					if(s[i][j] == 'R')
					{
						cnt++;
						if(cnt == num.back())
						{
							num.pop_back();
							cnt = 0;
							idx++;
						}
					}
					j--;
				}
			}
			else
			{
				j = 0;
				while(j < m and num.size())
				{
					ans[i][j] = res[idx];
					if(s[i][j] == 'R')
					{
						cnt++;
						if(cnt == num.back())
						{
							num.pop_back();
							cnt = 0;
							idx++;
						}
					}
					j++;
				}
			}
		}
		for(int i = 0; i < n; i++)
			cout << ans[i] << endl;
	}
    return 0;
}