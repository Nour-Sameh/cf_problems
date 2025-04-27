#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define el endl
#define sz(x) x.size()
#define all(v) v.begin(),v.end()
#define vi(n) vector<int>v(n);
#define loop(v) for(auto &x:v)
#define rall(v) v.rbegin(),v.rend()
#define fixed(n) fixed << setprecision(n)
#define YES(x) (x)?cout<<"YES"<<endl : cout<<"NO"<<endl
#define UNIQUE(c) (c).resize(unique(all(c)) - (c).begin())
#define NOOOOOUR ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(auto &x:v){
        cin>>x;
    }
    int sum=0;
    for(int i=0;i<x;i++){
        sum+=v[i];
    }
    int ans=sum,r=x,l=0,ind=0;
    while(r<n){
        sum+=v[r];
        sum-=v[l];
        l++;r++;
        if(ans>sum){
            ans=min(ans,sum);
            ind=l;
        }
    }
    cout<<ind+1;
}
signed main() {
    NOOOOOUR
    int t;t=1;
    // cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}