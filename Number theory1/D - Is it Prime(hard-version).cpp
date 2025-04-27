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
vector<bool>sieve(int n){
    vector<bool>v(n+1,true);
    v[0]=v[1]=false; // رقم 0و1 مش برايم
    for(int i=2;i*i<=n;i++){
        if(!v[i])continue;//لو هو مش برايم طنش 
        for(int j=2*i;j<=n;j+=i){
            v[j]=false;//  هيدخل علي اول واحد ترو ويخلي الي يقسموه ب فولس مينفعش يبقوا برايم وقبلهم في يقسمهم غير نفسهم والواحد
        }
    }
    return v;
}
void solve(){
    int q;cin>>q;
    vector<bool>ans=sieve(1000000);
    while(q--){
        int x;cin>>x;
        if(ans[x]){
            cout<<"YES";
        }
        else cout<<"NO";
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