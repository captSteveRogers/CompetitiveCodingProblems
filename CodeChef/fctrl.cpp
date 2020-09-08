// Link : https://www.codechef.com/LRNDSA01/FCTRL

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll findZeros(int n){
    ll cnt = 0;
    for(ll i=5; n/i>=1; i*=5)
        cnt+=n/i;
    return cnt;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans;
        ans = findZeros(n);
        cout<<ans<<endl; 
    }
    return 0;
}