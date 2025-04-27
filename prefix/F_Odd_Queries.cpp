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
    vector<int>p(n+1);
    int sum=0;
    for(int i=1;i<=n;i++){
        cin>>p[i];
        sum+=p[i];
    }
    for(int i=1;i<=n;i++){
        p[i]+=p[i-1];
    }
    while(q--){
        int l,r,k;cin>>l>>r>>k;
        YES((sum+(((r-l)+1)*k)-(p[r]-p[l-1]))%2);
    }
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