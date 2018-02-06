#include <bits/stdc++.h>
using namespace std;
string toTernary(long long n)
{
    string r;
    while(n!=0) {
            if(n%3==0)r="0"+r;
            else if(n%3==1) r="1"+r;
            else r = "2"+r;
            n/=3;}
    return r;
}
int main(){
    long long n;
    while(cin>>n && n>=0){
        string ret = toTernary(n);
        if(n==0)ret="0";
        cout<<ret<<endl;
    }
}
