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
    for(int i=0;i<n;i++){
        int cnt1=0,cnt2=0;
        for(int j=0;j<n;j++){
            if(v[i]>v[j]&&abs(v[i]-v[j])>=a&&abs(v[i]-v[j])<b&&j!=i){
                cnt1++;
            }
            else if(v[i]<v[j]&&abs(v[i]-v[j])>=a&&abs(v[i]-v[j])<b&&j!=i){
                cnt2++;
            }
        }
        cout<<cnt2<<" "<<cnt1<<el;
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