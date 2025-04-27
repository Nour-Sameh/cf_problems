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
    string s;cin>>s;
    int v[sz(s)+1]={};
    for(int i=1;i<=sz(s);i++){
        v[i]=v[i-1]+((s[i-1]=='1'&&s[i]=='3')?1:0);
    }
    int q;cin>>q;
    while(q--){
        int l,r;cin>>l>>r;
        cout<<v[r-1]-v[l-1]<<el;
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