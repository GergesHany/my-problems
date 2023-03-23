#include <bits/stdc++.h>

#define EPS 1e-18
#define sz(s) int(s.size())  
#define rall(s)  s.rbegin(), s.rend()
#define TC int t; cin >> t; while(t--)
#define getline(s) getline(cin >> ws, s)
#define all(vec)  vec.begin(),  vec.end()
#define updmin(a, b) a = min((ll)a, (ll)b)
#define updmax(a, b) a = max((ll)a, (ll)b)
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define to_decimal(bin) stoll(bin, nullptr, 2)
#define watch(x) cout << (#x)<<" = "<<x<< "\n"
#define fixed(n) cout << fixed << setprecision(n)
#define mod_combine(a, b, m) (((a % m) * (b % m)) % m)
#define ceill(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define cin_2d(vec, n, m) for(int i=0;i<n;i++) for(int j=0;j<m&&cin>>vec[i][j];j++);
#define cout_2d(g) for(auto& v : g) {for(auto& x : v) cout << x << " "; cout << "\n";}
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
const int N = 2 * 1e5 + 5;
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const ll Mod = 1'000'000'007;
const ll INF = 2'000'000'000;
const double PI = acos(-1.0);

void Gerges_Hany(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  #ifndef ONLINE_JUDGE  
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}


template < typename T = int > istream& operator >> (istream &in, vector < T > &v) {
    for (auto &x : v) in >> x;
    return in;
}
 
template < typename T = int > ostream& operator << (ostream &out, const vector < T > &v) { 
    for (const T &x : v) out << x << ' '; 
    return out;
}


void Accepted(){
  
  ll n, value, operations;
  cin >> n >> value >> operations;
  vector < ll > vec(n);
  cin >> vec;
  sort(all(vec));
  if (operations == 0 && vec[n - 1] < value) {
    cout << "NO";
    return;
  }

  for (int i = 0; i < n; i++){
    if (vec[i] > value) operations--;
  }

  cout << (operations >= 0 ? "YES" : "NO") << "\n";

}
   
int main()
{   
  
  Gerges_Hany();
 
  ll testcaces = 1;
  // cin >> testcaces;
  while (testcaces--){
    Accepted ();
  }
   
   Time;   
return 0;
}


