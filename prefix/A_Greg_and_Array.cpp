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
struct inc{  
    int l,r,d;                // لو الحل دا نفع ابقي انا جامده جمووووووده  بسم الله
};
void solve(){
    int n,m,k;cin>>n>>m>>k;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<inc>op(m+1);
    for(int i=1;i<=m;i++){
        cin>>op[i].l>>op[i].r>>op[i].d;
    }
    vector<int>cnt(m+2);
    while(k--){
        int x,y;cin>>x>>y;  //احسب عدد الاوبيريشنز واضربها في الفاليو الي عندي
        cnt[x]+=1;
        cnt[y+1]-=1;
    }
    for(int i=1;i<=m;i++){
        cnt[i]+=cnt[i-1];
    }
    vector<int>ra(n+2);
    for(int i=1;i<=m;i++){
        ra[op[i].l]+=cnt[i]*op[i].d;
        ra[op[i].r+1]-=cnt[i]*op[i].d;
    }
    for(int i=1;i<=n;i++){
        ra[i]+=ra[i-1];
        v[i]+=ra[i];
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
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