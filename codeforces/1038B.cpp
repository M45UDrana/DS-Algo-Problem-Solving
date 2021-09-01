#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if(n < 3)
	{
		cout << "No" << endl;
		return 0;
	}
	
	cout << "Yes" << endl << n-1 << " ";
	for(int i = 1; i < n; i++)
		cout << i << " ";
	
	cout << endl << 1 << " " << n << endl;
	
	
	return 0;
}