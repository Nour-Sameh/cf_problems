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
    int n;cin>>n;
    vector<pair<int,int>>valid;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        if(i>x)
            valid.push_back({x,i});
    }
    sort(all(valid));
    int ans=0;
    for(int i=0;i<sz(valid);i++){
        auto it=upper_bound(all(valid),make_pair(valid[i].se,LLONG_MAX)); //علشان هي بتقارن int with pair فبتجنب ان يحصل مشاكل بالطريقه دي
        if(it!=valid.end()){
            ans+=(sz(valid)-(it-valid.begin()));
        }
    }
    cout<<ans<<el;
}
signed main() {
    NOOOOOUR
    int t;t=1;
    cin>>t;
    while(t--){
        solve();
        //cout<<"\n";
    }
    return 0;
}