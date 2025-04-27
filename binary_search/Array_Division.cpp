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
    vector<int>v(n);
    int mx=0,sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mx=max(mx,v[i]);
        sum+=v[i];
    }
    int l=mx,r=sum,ans=0;
    while(l<=r){
        int mid=(l+r)/2;
        int cnt=0,s=0;
        for(int i=0;i<n;){
            if(s+v[i]<=mid){
                s+=v[i];
                i++;
            }
            else{
                cnt++;
                s=0;
            }
        }
        if(cnt+1<=k){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
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