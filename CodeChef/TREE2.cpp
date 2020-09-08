// Link : https://www.codechef.com/SEPT20B/problems/TREE2

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int remove_duplicates(vector<ll> &a){
    int n = a.size();
    if(n==0 || n==1)
        return n;

    vector<ll> b(n);
    ll j = 0 ;  // no of passes
    for (ll i = 0; i < n - 1; ++i) {
        if (a[i] != a[i+1]){
            b[j++] = a[i];
        }
    }
    b[j++] = a[n - 1];

    for (ll i = 0; i < j; ++i) {
        a[i] = b[i];
    }
    return  j ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n; 
        vector<ll> v(n);
        for(ll i=0; i<n; i++)
            cin>>v[i];
        sort(v.begin(), v.end());
        ll x = remove_duplicates(v);
        if(v[0]==0){
            x--;
            cout<<x<<endl;
        }
        else
            cout<<x<<endl;
    }
    return 0;
}