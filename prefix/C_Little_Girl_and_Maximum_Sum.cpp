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
    vector<int>v(n+5);
    vector<int>cnt(n+5);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    while(q--){
        int l,r;cin>>l>>r;
        cnt[l]++;
        cnt[r+1]--;
    }
    for(int i=1;i<=n;i++){ //احسب عدد الاوبيريشن وبعد كدا اضرب اكبر عدد اوبيريشن في اكبر عدد في الاراي
        cnt[i]+=cnt[i-1];
    }
    sort(rall(cnt));
    sort(rall(v));
    int ans=0;
    for(int i=0;i<=n;i++){
        ans+=v[i]*cnt[i];
    }
    cout<<ans<<el;
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