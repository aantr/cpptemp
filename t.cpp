#include <bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifdef ON_PC
#define debug(x...) cerr << #x << " = ["; _print(x)
#else
#define debug(x...)
#endif

typedef long long ll;
typedef long double ld;

#define x first
#define y second
#define pb push_back
#define all(a) a.begin(), a.end()

#define int ll

void solve(){

    int n;
    cin>>n;
    cout<<n<<endl;

}

signed main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifdef ON_PC
    /*
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */
    #endif // ON_PC

    int t=1;
    //cin>>t;
    #ifdef ON_PC
    if (t > 1) cerr<<"\n-------------------\n"<<endl;
    #endif // ON_PC
    while(t--){
        solve();
        #ifdef ON_PC
        if (t > 1) cerr<<"\n-------------------\n"<<endl;
        #endif // ON_PC
    }

}
