#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	string s; cin >> s;
	int dft = 0;
	for(int i = 0; i < n; i++)
	{
		if(s[i] == '(')
		{
			dft++;
			cout << dft%2;
		}
		else
		{
			cout << dft%2;
			dft--;
		}
	}
	cout << endl;
    return 0;
}