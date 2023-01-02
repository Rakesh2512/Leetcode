#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "dog cat cat dog";
    string pattern = "abba";
    stringstream ss(s);
    string st;
    while(ss >> st){
        cout<<st<<" ";
    }
}