#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k; cin >> n >> k;
	string s; cin >> s;

	int up = n, down = n;
	for(int i = 0; i < k; i++)
	{
		int j = i+k;
		while(j < n)
		{
			if(s[i] > s[j])
				up = min(up, j);
			if(s[i] < s[j])
				down = min(down, j);
			j += k;
		}
	}

	if(up > down)
	{
		int i = k-1;
		while(i >= 0)
		{
			if(s[i] == '9')
				s[i] = '0';
			else 
			{
				s[i]++;
				break;
			}
			i--;
		}
	}

	cout << n << endl;
	for(int i = 0; i < n; i++)
		cout << s[i%k];
	cout << endl;
    return 0;
}