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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    map<char,int>mp;
    int cnt=0;
    for(int i=0;i<k;i++){
        mp[s[i]]++;
        if(mp[s[i]]==1)cnt++;
    }
    int l=0,r=k,ans=cnt;
    while(r<n){
        mp[s[l]]--;
        if(mp[s[l]]==0)cnt--;
        if(mp[s[r]]==0)cnt++;
        mp[s[r]]++;
        ans=max(cnt,ans);
        l++;r++;
    }
    cout<<ans;
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