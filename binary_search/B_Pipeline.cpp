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
int sum(int x){return (x*(x+1))/2;}
void solve(){
    int n,k;cin>>n>>k;
    if(n==1)return void(cout<<0);
    if(k>=n)return void(cout<<1);
    if(sum(k-1)<n-1)return void(cout<<"-1");
    int l=1,r=k-1,ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if((sum(k-1)-(sum(mid-1)))>=n-1){   //2+3+4>=9 =>1+2+3>=8 =>بنقص من كله علشان اوصل للمعادله الي اقدر اجبها
            ans=(k-1)-mid+1;
            l=mid+1;
        }
        else{
            r=mid-1;
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