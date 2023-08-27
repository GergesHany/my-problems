#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std; 
using namespace __gnu_pbds;

#define EPS 1e-8
#define sz(s) (ll)(s.size())  
#define rall(s)  s.rbegin(), s.rend()
#define TC int t; cin >> t; while(t--)
#define getline(s) getline(cin >> ws, s)
#define all(vec)  vec.begin(),  vec.end()
#define updmin(a, b) a = min((ll)a, (ll)b)
#define updmax(a, b) a = max((ll)a, (ll)b)
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define endd(s) return void(cout << s << "\n")
#define fixed(n) cout << fixed << setprecision(n)
#define ceill(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define cin_2d(vec, n, m) for(int i=0;i<n;i++) for(int j=0;j<m&&cin>>vec[i][j];j++);
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define ordered_set tree<ll, null_type, less <ll>, rb_tree_tag,tree_order_statistics_node_update>
#define multi_ordered_set tree<ll, null_type, less_equal <ll>, rb_tree_tag,tree_order_statistics_node_update>

typedef long long ll;
typedef long double ld;
const ll mod = 1000000007;
const ll INF = 1LL << 60;
typedef unsigned long long ull;


void Gerges_Hany(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  #ifndef ONLINE_JUDGE  
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}

template < typename T = int > istream& operator >> (istream &in, vector < T > &v) {
    for (auto &x : v) in >> x; return in;
}
 
template < typename T = int > ostream& operator << (ostream &out, const vector < T > &v) { 
    for (const T &x : v) out << x << ' '; return out;
}

void Accepted(){  

  ll n, q;
  cin >> n >> q;
  vector < ll > vec(n);
  cin >> vec;
  vector < ll > prefix_min(n), suffix_min(n);
  prefix_min[0] = vec[0];
  suffix_min[n - 1] = vec[n - 1];
  for(int i = 1; i < n; i++){
    prefix_min[i] = min(prefix_min[i - 1], vec[i]);
    suffix_min[n - i - 1] = min(suffix_min[n - i], vec[n - i - 1]);
  }

  ll l, r;
  while(q-- && cin >> l >> r){
    l--, r--;
    ll ans = n + 1;
    if (l > 0) updmin(ans, prefix_min[l - 1]);
    if (r < n - 1) updmin(ans, suffix_min[r + 1]);
    cout << ans << "\n";
  }

}

int main()
{ 
  
  Gerges_Hany();
  int testcaces = 1;
   cin >> testcaces;
  while (testcaces--){  
    // cout << "Case #" << T++ << ": ";
    Accepted();
  }   
  Time;
  return 0;
}
