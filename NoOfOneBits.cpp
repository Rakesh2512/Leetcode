#include<Bits/stdc++.h>
using namespace std;


int main(){
    // Number of one bits
    long long int n;
    cin>>n;
    int ans = 0;
    for(int i=0;i<32;i++){
        if(n&1){
            ans++;
        }
        n = n>>1;
    }
    cout<<ans<<"\n";
}