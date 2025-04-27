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
    int n;cin>>n;
    vector<int>v;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            v.push_back(i); // اما هقسم علي الرقم او اكبر منه وانا هنا بجيب اصغر حاجه
            n/=i;
        }
    }
    if(n!=1)v.push_back(n);
    for(auto &x:v)cout<<x<<" ";
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