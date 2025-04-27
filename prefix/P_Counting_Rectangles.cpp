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
    vector<vector<int>>ans(1005,vector<int>(1005));
    while(n--){
        int h,w;cin>>h>>w;
        ans[h][w]+=h*w;
    }
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            ans[i][j]+=ans[i-1][j];
        }
    }
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            ans[i][j]+=ans[i][j-1];
        }
    }
    while(q--){
        int h1,w1,h2,w2;
        cin>>h1>>w1>>h2>>w2;// بين الكبير والصغير يعني اقل من الكبير بواحد واكبر من الصغير بواحد
        cout<<ans[h2-1][w2-1]-ans[h1][w2-1]-ans[h2-1][w1]+ans[h1][w1]<<el;
    }  //cout<<ans[h2][w2]-ans[h1-1][w2]-ans[h2][w1-1]+ans[h1-1][w1-1]<<el; كانت كدا
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