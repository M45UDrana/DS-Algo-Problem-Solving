    #include <bits/stdc++.h>
     
    using namespace std;
     
    typedef long long ll;
    typedef pair<int, int> pii;
    typedef pair<string, int> psi;
     
    #define ff first
    #define ss second
    #define pb(a) push_back(a)
    #define mp(a,b) make_pair(a,b)
    #define input freopen("input.txt","r",stdin)
    #define output freopen("output.txt","w",stdout)
    #define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
    #define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
    #define mem(a, b) memset(a,b,sizeof(a))
         
    int main()
    {
        int q; cin >> q;
        while(q--)
        {
            int n; cin >> n;
            int a[n];
            for(int i = 0; i < n; i++)
                cin >> a[i];
            sort(a, a+n);
            int cnt = 1;
            for(int i = 0; i < n; i++)
            {
                if(abs(a[i]-a[i+1]) <= 1) cnt++;
            }
            if(cnt >= 2)
                cout << 2 << endl;
            else 
                cout << 1 << endl;
        }   
        return 0;
     
    }