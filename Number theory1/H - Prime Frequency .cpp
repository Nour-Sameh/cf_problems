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
    for(int i=2;i<=n;i++){
        if(!v[i])continue;
        for(int j=i*i;j<=n;j+=i){
            v[j]=false;
        }
    }
    return v;
}
void solve(){
    int q;cin>>q;
    vector<bool>prime=sieve(1e6+10);
    for(int k=1;k<=q;k++){
        string s;cin>>s;
        map<char,int>mp;
        vector<char>ans;
        for(int i=0;i<sz(s);i++){
            mp[s[i]]++;
        }
        for(auto &[c,i]:mp){
            if(prime[i]){
                ans.push_back(c);
            }
        }
        cout<<"Case "<<k<<": ";
        sort(all(ans));
        if(ans.empty())cout<<"empty";
        else{
            for(auto x:ans){
                cout<<x;
            }
        }
        cout<<el;
    }
}
signed main() {
    NOOOOOUR
    int t;t=1;
    //cin>>t;
    while(t--){
        solve();
        //cout<<"\n";
    }
    return 0;
}