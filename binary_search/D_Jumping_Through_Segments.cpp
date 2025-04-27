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
pair<int,int>Intersection(int s1,int e1,int s2,int e2) {
    int st=max(s1,s2);
    int end=min(e1,e2);
    if(st<=end){
        return{st,end};
    }
    else{
        return{-1,-1};
    }
}
bool can(int k,vector<pair<int,int>>&v,int n){
    int r1=0,r2=0;
    pair<int,int>x=Intersection(0,k,v[0].fi,v[0].se);
    if(x.fi==-1)return false;
    r1=x.fi;r2=x.se;
    for(int i=1;i<n;i++){
        x=Intersection(r1-k,r2+k,v[i].fi,v[i].se);
        if(x.fi==-1)return false;
        r1=x.fi;r2=x.se;
    }
    return true;
}
void solve(){
    int n;cin>>n;
    vector<pair<int,int>>v;
    int q=n;
    while(q--){
        int l,r;cin>>l>>r;
        v.push_back({l,r});
    }
    int s=0,e=1e18,ans=0;
    while(s<=e){
        int mid=(e+s)/2;
        if(can(mid,v,n)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<ans<<el;
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