#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    long double a; cin >> a;
    long double b[4] = {127, 32767, 2147483647, 9223372036854775807};
    string ans[4] = {"byte", "short", "int", "long"};
    for(int i = 0; i < 4; i++)
    {
        if(a <= b[i])
        {
            cout << ans[i] << endl;
            return 0;
        }
    }
    cout << "BigInteger" << endl;
    return 0;
}