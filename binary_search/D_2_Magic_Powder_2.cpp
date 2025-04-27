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

bool can(int mid,vector<int>&need,vector<int>&have,int k){
    for(int i=0;i<sz(need);i++){
        if(mid*need[i]>have[i]){
            k-=(mid*need[i]-have[i]);
            if(k<0)return false;
        }
    }
    return true;
}
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>have(n);
    vector<int>need(n);
    for(int i=0;i<n;i++){
        cin>>need[i];
    }
    for(int i=0;i<n;i++){
        cin>>have[i];
    }
    int l=0,r=2000000005,mid,ans=0;
    while(l<=r){
        mid=(l+r)/2;
        if(can(mid,need,have,k)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<< ans;

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
// I wish I was a cat, no university, no work, just meow meow !