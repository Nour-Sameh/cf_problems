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
const int N=1e6+10;
vector<bool>v(N,true);
void sieve(){
    v[0]=v[1]=false;
    for(int i=2;i*i<=N;i++){
        if(!v[i])continue;
        for(int j=2*i;j<=N;j+=i){
            v[j]=false;
        }
    }
}
void solve(){
    int n,k;cin>>n>>k;
    sieve();
    vector<int>primes;
    for(int i=0;i<1005;i++){
        if(v[i])primes.push_back(i);
    }
    int cnt=0;
    for(int i=1;i<sz(primes);i++){
        int x=primes[i]+primes[i-1]+1;
        if(x<=n&&v[x])cnt++;
    }
    if(cnt>=k)cout<<"YES";
    else cout<<"NO";
    
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