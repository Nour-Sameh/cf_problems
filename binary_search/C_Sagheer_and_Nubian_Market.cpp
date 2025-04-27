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
int n,s;
int sarr[100005];
int anss;
bool can(int m,vector<int>&arr){
    int sum =0;
    for(int i=0;i<n;i++)
        sarr[i]=arr[i]+((i+1)*m);
    sort(sarr,sarr+n);
    for(int i=0;i<m;i++) {
        sum+=sarr[i];
    }
    if(sum<=s)
        anss=sum;
    return sum<=s;
}
void solve(){
    cin>>n>>s;
    vector<int>arr(n);
    for(auto &x:arr)cin>>x;
    int l=0,r=n,ans=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(can(mid,arr)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<" "<<anss<<el;
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