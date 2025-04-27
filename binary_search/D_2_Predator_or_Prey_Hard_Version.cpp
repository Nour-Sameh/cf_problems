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
    int n,a,b;cin>>n>>a>>b;
    vector<int>v(n);
    for(auto& x:v)cin>>x;
    vector<int>c=v;
    sort(all(c));
    for(int i=0;i<n;i++){
        auto lprey=upper_bound(all(c),v[i]-a);
        auto rprey=upper_bound(all(c),v[i]-b);
        int prey=abs(rprey-lprey);
        
        auto lpredator=lower_bound(all(c),v[i]+a);
        auto rpredator=lower_bound(all(c),v[i]+b);
        int predator=abs(rpredator-lpredator);

        cout<<predator<<" "<<prey<<el;
    }
}
signed main() {
    NOOOOOUR
    int t;t=1;
    //cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}