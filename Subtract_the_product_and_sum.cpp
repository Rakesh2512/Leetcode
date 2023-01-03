#include <bits/stdc++.h>
using namespace std;

int sum(int n){
        int num = n;
        int summ = 0;
        while(num > 0){
            summ += (num%10);
            num/=10;
        }
        return summ;
}

int product(int n){
        int num = n;
        int pro = 1;
        while(num > 0){
            pro *= (num%10);
            num/=10;
        }
        return pro; 
}

int subtractProductAndSum(int n) {
        int sumofdigit = sum(n);
        int productofdigit = product(n);
        //cout<<productofdigit<<" "<<sumofdigit<<"\n";
        return productofdigit - sumofdigit;
}
int main(){
    int n;
    cin>>n;
    int ans = subtractProductAndSum(n);
    cout<<ans<<"\n";
}
