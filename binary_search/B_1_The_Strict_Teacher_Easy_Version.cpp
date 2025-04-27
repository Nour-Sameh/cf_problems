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
    int n,m,q;
    cin>>n>>m>>q;
    vector<int>v(m);
    for(auto & x:v)cin>>x;
    sort(all(v));
    while(q--){
        int x;cin>>x;
        if(x<v[0])cout<<v[0]-1<<el;
        else if(x>v[m-1])cout<<n-v[m-1]<<el;
        else{
            auto it1=lower_bound(all(v),x);
            auto it2=it1-1;
            if(x==v[it1-v.begin()]||x==v[it2-v.begin()])cout<<0;
            else{
                int ans=abs(((v[it1-v.begin()])+v[(it2-v.begin())])/2);
                if(ans-v[it1-v.begin()]>ans-v[it2-v.begin()]){
                    cout<<abs(ans-(v[it1-v.begin()]))<<el;
                }
                else cout<<abs(ans-(v[it2-v.begin()]))<<el;
            }
        }
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