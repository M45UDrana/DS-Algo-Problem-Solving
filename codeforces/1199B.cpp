#include <bits/stdc++.h>

using namespace std;

int main()
{
	double H, L, X;
	
	scanf("%lf%lf", &H, &L);
	
	X = ((L*L) - (H*H)) / (2*H);
	
	printf("%.13lf", X);
	return 0;
}