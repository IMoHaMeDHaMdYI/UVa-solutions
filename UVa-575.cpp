#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    while(cin>>s)
    {
        if(s=="0")
            return 0;
        int p = s.size();
        ll ans = 0;
        for(int j=0,i=p; i>0; i--,j++)
        {
            ans+= ((int)s[j]-(int)('0'))*(pow(2,i)-1);
        }
        cout<<ans<<endl;
    }
    return 0;
}
