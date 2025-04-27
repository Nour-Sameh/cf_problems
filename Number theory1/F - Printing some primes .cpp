#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define el '\n'
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
    v[0]=v[1]=false;
    for(int i=2;i*i<=n;i++){
        if(v[i]){
            for(int j=i*i;j<=n;j+=i){
                v[j]=false;
            }
        }
    }
    return v;
}
void solve(){
    int n=1e6;
    vector<bool>ans=sieve(n);
    vector<int>re;
    for(int i=2;i<n;i++){
        if(ans[i])re.push_back(i);
    }
    for(int i=0;i<sz(re);i++){
        if(i%100==0){
            cout<<re[i]<<el;
        }
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