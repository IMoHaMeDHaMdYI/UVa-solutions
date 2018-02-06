#include <bits/stdc++.h>
using namespace std;
long long parity;
string toBinary(int n)
{
    string r;
    while(n!=0) {
            if(n%2==0)r="0"+r;
            else r="1"+r,parity++;
            n/=2;}
    return r;
}
int main(){
    int n;
    while(cin>>n && n!=0){
        parity = 0;
        string ret = toBinary(n);
        cout<<"The parity of "<<ret<<" is "<<parity<<" (mod 2)."<<endl;
    }
}
