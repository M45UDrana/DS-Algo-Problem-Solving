#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s, t; cin >> s >> t;
	int cnts0 = 0, cnts1 = 0, cnt0 = 0, cnt1 = 0;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == '1')
			cnts1++;
		else cnts0++;
	}
	for(int i = 0; i < t.size(); i++)
	{
		if(t[i] == '1')
			cnt1++;
		else cnt0++;
	}
	int ocur = 0;
	for(int i = 0; 1; i++)
	{
		if(cnts1 >= cnt1*i and cnts0 >= cnt0*i)
			ocur = i;
		else break;
	}
	for(int i = 0; i < ocur; i++)
		cout << t;
	cnts0 -= cnt0*ocur;
	cnts1 -= cnt1*ocur;
	for(int i = 0; i < cnts0; i++)
		cout << 0;
	for(int i = 0; i < cnts1; i++)
		cout << 1;
	cout << endl;
    return 0;
}