// Link : https://www.codechef.com/SEPT20B/problems/ADAMAT

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<vector<int>> v(n, vector<int>(n));
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>v[i][j];
        
        int cnt = 0;
        for(int i=n-1; i>0; i--){
            if(v[i][i]!=v[i][i-1]+1){
                cnt++;
                for(int j=0; j<i; j++){
                    for(int k=j; k<i; k++)
                        swap(v[j][k], v[k][j]);
                }
            }
            else 
                continue;
        }
        cout<<cnt<<endl;
    }
}