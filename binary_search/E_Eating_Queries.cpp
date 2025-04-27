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
    vector<int>arr(n),p(n);
    for(auto &x:arr)cin>>x;
    sort(rall(arr));
    for(int i=0;i<n;i++){
        p[i]=(i?p[i-1]:0)+arr[i];
    }
    while(q--){
        int x;cin>>x;
        auto ans=lower_bound(all(p),x);
        if(ans==p.end())cout<<-1<<el;
        else cout<<(ans+1)-p.begin()<<el;
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