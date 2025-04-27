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
int n;string s[10005];int a[10005];char x[10005];
int can(int mid){
    for(int i=0;i<n;i++){
        if(s[i]=="<="&&mid>a[i])return 3;
        else if(s[i]=="<"&&mid>=a[i])return 3;
        else if(s[i]==">="&&mid<a[i])return 1;
        else if(s[i]==">"&&mid<=a[i])return 1;
    }
    return 2;
}
void solve(){
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>s[i]>>a[i]>>x[i];
    }
    for(int i=0;i<n;i++){
        if(x[i]=='N'){
            if(s[i]=="<")s[i]=">=";
            else if(s[i]=="<=")s[i]=">";
            else if(s[i]==">=")s[i]="<";
            else s[i]="<="; 
        }
    }
    int l=-2e9,r=2e9,mid;
    string ans="Impossible";
    while(l<=r){
        mid=l+r>>1;
        int x=can(mid);
        if(x==2){
            cout<<mid;
            return;
        }
        else if(x==1){
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