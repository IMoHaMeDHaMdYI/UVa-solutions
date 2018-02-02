#include <bits/stdc++.h>
using namespace std;
int main() {
    long long arr[30];
    arr[0]=1;
    arr[1]=2;
    arr[2]=4;
    for(int i=3;i<30;i++){
        arr[i]=2*arr[i-1];
    }
    int n;
    int x = 1;
    while(cin>>n && n>=0){
        for(int i=0;i<30;i++){
            if(n<=arr[i]){
                cout<<"Case "<<x<<": "<<i<<endl;
                break;
            }
        }
        x++;
    }
    return 0;
}
