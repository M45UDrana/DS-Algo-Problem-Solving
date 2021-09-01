#include <bits/stdc++.h>

using namespace std;
int ar[10] = {0};
void fanL()
{
    for(int i=0; i<10; i++)
    {
        if(ar[i] == 0)
        {
            ar[i] = 1;
            break;
        }
    }
}

void fanR()
{
    for(int i=9; i>=0; i--)
    {
        if(ar[i] == 0)
        {
            ar[i] = 1;
            break;
        }
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
    int n;
    string s;
    cin >> n >>s;

    for(int i=0; i<n; i++)
    {
        if(s[i] == 'L')
        {
            fanL();
        }
        else if(s[i] == 'R')
        {
            fanR();
        }
        else
        {
            ar[s[i] - 48] = 0;
        }
    }

    for(int i=0; i<10; i++)
        cout << ar[i];

    return 0;
}

/*
8
LLRL1RL1

9
L0L0LLRR9

*/