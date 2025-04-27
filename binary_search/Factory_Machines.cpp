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
int n,t;
bool can(int mid,int n,vector<int>&v){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=(mid/v[i]);
        //cout<<sum<<el;
        if(sum>=t)return true;
    }
    return(sum>=t);
}
void solve(){
    cin>>n>>t;
    vector<int>v(n);
    sort(all(v));
    for(auto& x:v)cin>>x;
    int l=1,r=1e18,ans=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(can(mid,n,v)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans;
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