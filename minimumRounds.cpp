#include<Bits/stdc++.h>
using namespace std;

int minimumRounds(vector<int>&v){
    map<int,int>mp;
    int ans = 0;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    for(auto it:mp){
        if(it.second == 1){
            return -1;
        }
        if(it.second %3 == 0){
            ans += it.second/3;
        }
        else{
            ans+=it.second/3+1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ans = minimumRounds(v);
    cout<<ans<<"\n";
}