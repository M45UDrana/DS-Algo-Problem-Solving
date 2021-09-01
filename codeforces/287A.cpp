#include <bits/stdc++.h>

using namespace std;

int main()
{
	string st[5];
	for(int i = 0; i < 4 ; i++)
		cin >> st[i];
	int wt = 0, blk = 0;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(st[i][j] == '.')
				wt++;
			if(st[i+1][j] == '.')
				wt++;
			if(st[i][j+1] == '.')
                                wt++;
                        if(st[i+1][j+1] == '.')
                                wt++;
			if(st[i][j] == '#')
                                blk++;
                        if(st[i+1][j] == '#')
                                blk++;
                        if(st[i][j+1] == '#')
                                blk++;
                        if(st[i+1][j+1] == '#')
                                blk++;

			if(wt >= 3 || blk >= 3)
			{
				cout << "YES" << endl;
				return 0;
			}
			wt = 0; blk = 0;
		}
	}
	cout << "NO" << endl;

        return 0;
}