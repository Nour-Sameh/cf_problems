#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define el endl
#define sz(x) x.size()
#define all(v) v.begin(),v.end()
#define pb(x) push_back(x)
#define vi(n) vector<int>v(n);
#define loop(v) for(auto &x:v)
#define rall(v) v.rbegin(),v.rend()
#define fixed(n) fixed << setprecision(n)
#define YES(x) (x)?cout<<"YES"<<endl : cout<<"NO"<<endl
#define UNIQUE(c) (c).resize(unique(all(c)) - (c).begin())
#define NOOOOOUR ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve(){
    int n,k;cin>>n>>k;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    vector<int>p;
    for(auto &x:mp){
        if(x.se>=k)p.pb(x.fi);
    }
    if(sz(p)==0)return void(cout<<-1);
    int left=p[0],right=p[0],l=p[0],mx=0;
    sort(all(p));
	for(int i=1;i<sz(p);i++){  //2 3 4 6
        if(p[i]-1==p[i-1]){
            if(mx<p[i]-l){
                left=l;
                right=p[i];
                mx=p[i]-l;
            }
        }
        else{
            l=p[i];
        }
    }
    cout<<left <<" "<<right;
}
signed main() {
    NOOOOOUR
    int t;t=1;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
