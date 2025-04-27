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
    int n,k,q;cin>>n>>k>>q;
    vi(200005);
    while(n--){
        int l,r;cin>>l>>r;
        v[l]++;
        v[r+1]--;
    }
    for(int i=1;i<=200005;i++)v[i]+=v[i-1];
    vector<int>ans(200005);
    for(int i=1;i<=200005;i++){
        if(v[i]>=k){
            ans[i]=1;
        }
    }
    for(int i=1;i<=200005;i++)ans[i]+=ans[i-1];
    while(q--){
        int a,b;cin>>a>>b;
        cout<<ans[b]-ans[a-1]<<el;
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