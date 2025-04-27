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
    int n,q;cin>>n>>q;
    vector<int>v(n+1);
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<int>pre(n+1);
    int dis=0;
    for(int i=n;i>=1;i--){  
        if(mp[v[i]]==0) {
            dis++;
        }
        mp[v[i]]++;
        pre[i]=dis;
    }
    while(q--){
        int x;cin>>x;
        cout<<pre[x]<<el;
    }
    
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