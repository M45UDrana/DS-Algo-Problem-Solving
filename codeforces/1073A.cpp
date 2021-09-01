#include <bits/stdc++.h>

using namespace std;

typedef vector <int> vi;

#define pb push_back
#define PI acos(-1)

int main()
{
    int n, m=0;
    char chrs[1001];
    cin>>n>>chrs;
    int a=0;

//    for(char i='a'; i<='z'; i++)
//    {
//        int charl=0;
//        for(int j=0; j<n; j++)
//        {
//            if(i==chrs[j])
//            {
//                charl++;
//            }
//            if(charmax<charl)
//            {
//                charmax=charl;
//            }
//        }
//    }

        for(int i=0; i<n-1; i++){
            if(chrs[i] != chrs[i+1]){
                a=1;
                cout<<"YES"<<endl;
                cout<<chrs[i]<<chrs[i+1]<<endl;
                break;
            }
        }
        if(a==0) cout<<"NO"<<endl;



    return 0;
}