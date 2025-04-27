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
// other way    
vector<int>sievee(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
        for (int p : primes) {
            if (i * p > n) {
                break;
            }
            is_prime[i * p] = false;
            if (i % p == 0) {
                break;
            }
        }
    }
    return primes;
}
vector<int>sieve(int n){
    vector<bool>v(n+1,true);
    vector<int>div(n+1,0);
    v[0]=v[1]=false;
    for(int i=2;i<=n;i++){
        if(v[i]){
            div[i]=i;
            for(int j=2*i;j<=n;j+=i){
                v[j]=false;
                if(div[j]==0){ //هيخزن اول حاجه عدي عليها 
                    div[j]=i;
                }
            }
        }
    }
    return div;
}
vector<int>pri_fac(int n,vector<int>div){
    vector<int>ans;
    while(n!=1){
        int x=div[n];
        ans.push_back(x);
        n/=x;
    }
    return ans;
}
void solve(){
    int x; cin >> x;
    while (x % 2 == 0) {
        x /= 2;
    }
    if (x > 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

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