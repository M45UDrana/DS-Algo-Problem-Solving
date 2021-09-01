#include <bits/stdc++.h>

using namespace std;

int main()
{
	long double x1, y1, x2, y2; 
	cin >> x1 >> y1 >> x2 >> y2;
	long double x3, y3, x4, y4; 
	cin >> x3 >> y3 >> x4 >> y4;
	long double x5, y5, x6, y6; 
	cin >> x5 >> y5 >> x6 >> y6;
	
	long double i = x1, j =y1;
	long double x = 488888.0;
	while(i <= x2 and j <= y2)
	{
		bool fl1 = false, fl2 = false;
		if(i < x3 or j < y3 or i > x4 or j > y4)
			fl1 = true;
		if(i < x5 or j < y5 or i > x6 or j > y6)
			fl2 = true;
		if(fl1 and fl2)
			return !(cout << "YES" << endl);

		if(i != x2)
			i += 0.5;
		else j += 0.5;
	}
	i = x1; j = y1;
	while(i <= x2 and j <= y2)
	{
		bool fl1 = false, fl2 = false;
		if(i < x3 or j < y3 or i > x4 or j > y4)
			fl1 = true;
		if(i < x5 or j < y5 or i > x6 or j > y6)
			fl2 = true;
		if(fl1 and fl2)
			return !(cout << "YES" << endl);

		if(j != y2)
			j += 0.5;
		else i += 0.5;
	}
	cout << "NO" << endl;
	return 0;
}