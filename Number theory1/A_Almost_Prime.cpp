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
bool pri_fac(int n){
    set<int>st;
    for(int i=2 ; i*i<=n ; i++){
        while(n%i==0){
            st.insert(i);
            n/=i;
        }
    }
    if(n>1)
        st.insert(n);
    return sz(st)==2;
}

void solve(){
    int q;cin>>q;
    int cnt=0;
    for(int i=1;i<=q;i++){   
        if(pri_fac(i))cnt++;
    }
    cout<<cnt;
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