#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/* Iterative Function to calculate (x^y)%p in O(log y) */
ll pwr(ll x, ll y, ll p)
{
    ll res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
    // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
int main()
{
    ll n,m,k;
    while(cin>>n>>m && (n || m))
    {
        cin>>k;
        int arr[k+1];
        for(int i=0; i<=k; i++)
            cin>>arr[i];
        set<int> s;
        for(int i=0; i<=m; i++)
        {
            ll sm=0;
            for(int j=0; j<=k; j++)
            {

                ll pw = pwr(i,j,n+1);
                sm+=arr[j]*(pw);
                sm%=(n+1);
            }
            sm=sm%(n+1);
            s.insert(sm);
        }
        cout<<s.size()<<endl;

    }
    return 0;
}
