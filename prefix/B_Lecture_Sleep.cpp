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
    int n,k;cin>>n>>k;
    vector<int>v(n+1);
    vector<int>p(n+1);
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    int sum=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        if(v[i])sum+=p[i];
    }
    vector<int>pre(n+1,0);
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+((v[i])?0:p[i]);// الي مش بصفر هو الي بيتحسب!
    }
    int ans=0;
    for(int i=k;i<=n;i++){
        ans=max(ans,pre[i]-pre[i-k]);
    }
    cout<<ans+sum;
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