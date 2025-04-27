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
    vector<vector<int>>v(n+1,vector<int>(q+1));
    for(int i=1;i<=q;i++){
        int a,b;cin>>a>>b;
        for (int j = 1; j <= n; j++) {
            v[j][i] = v[j][i - 1];// هنا بنحدث الاراي كلها
        }
        if(a==1){
            v[b][i] = v[b][i - 1] + 1;
        }
        if(a==2){
            cout<<v[b][i]<<el;
        }
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