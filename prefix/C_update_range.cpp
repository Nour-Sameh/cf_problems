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
        int n,q;cin>>n>>q;
        vector<int>v(n+2),pre(n+2);
        for(int i=1;i<=n;i++)cin>>v[i];
        while(q--){
            int l,r,val;cin>>l>>r>>val;
            pre[l]+=val;
            pre[r+1]-=val;
        }
        for(int i=1;i<=n;i++){
            pre[i]+=pre[i-1];
            v[i]+=pre[i];
        }
        for(int i=1;i<=n;i++){
            cout<<v[i]<<" ";
        }
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