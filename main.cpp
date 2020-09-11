#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <functional>
#define pb                    push_back
#define ll                    long long
#define ss                       second
#define ff                        first
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define eps                   0.000000001
#define all(c)               (c).begin(),(c).end()
#define present(c,x)         ((c).find(x) != (c).end())
#define cpresent(c,x)        (find(all(c),x) != (c).end())
//#define pi                   pair<int,int>
#define pll                  pair<ll,ll>
#define endl                 '\n'
#define ull                  unsigned long long
using namespace std;
vector<string> split(const string& s, char c) {
    vector<string> v; stringstream ss(s); string x;
    while (getline(ss, x, c)) v.emplace_back(x); return move(v);
}
template<typename T, typename... Args>
inline string arrStr(T arr, int n) {
    stringstream s; s << "[";
    for(int i = 0; i < n - 1; i++) s << arr[i] << ",";
    s << arr[n - 1] << "]";
    return s.str();
}

#define debug(args...) {__evars_begin(__LINE__); __evars(split(#args, ',').begin(), args);}

inline void __evars_begin(int line) { cerr << "#" << line << ": "; }
template<typename T> inline void __evars_out_var(vector<T> val) { cerr << arrStr(val, val.size()); }
template<typename T> inline void __evars_out_var(T* val) { cerr << arrStr(val, 10); }
template<typename T> inline void __evars_out_var(T val) { cerr << val; }
inline void __evars(vector<string>::iterator it) { cerr << endl; }

template<typename T, typename... Args>
inline void __evars(vector<string>::iterator it, T a, Args... args) {
    cerr << it->substr((*it)[0] == ' ', it->length()) << "=";
    __evars_out_var(a);
    cerr << "; ";
    __evars(++it, args...);
}
//using namespace __gnu_pbds;
//typedef tree<int, null_type, int>, rb_tree_tag,tree_order_statistics_node_update> policy;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
typedef vector< int > vi;
typedef vector< vi > vvi;
int dx[8]={1,-1,0,0,1,1,-1,-1};
int dy[8]={0,0,-1,1,2,-2,2,-2};
vector<int> vis(200010,0),dis(200010,0),par(200010,0),ed(200010,0);
vector<pair<int,int>> adj[200010];
vector<vector<int>> ad;
int myrandom (int i) { return std::rand()%i;}
const int MAX=200010;
const ull inf = 1000000007;
// Block Sieve for primes upto 10^9 Time taken-2.7 sec on Codforces , 3.7 sec on ideone , so pretty fast
#pragma GCC optimize("Ofast")
#pragma GCC target("avx")
#include <bits/stdc++.h>
using pii = std::pair<int, int>;
const int NMAX = (int)1e9;
const int SNMAX = (int)sqrt(NMAX) + 1;
std::bitset<NMAX + 1> bits;
int main() {
    bits[0] = bits[1] = 1;
    std::vector<pii> smallPrimes;
    for (int i = 2; i <= SNMAX; ++i) {
        if (!bits[i]) {
            smallPrimes.push_back({i, i * i});
            for (int j = i * i; j <= SNMAX; j += i) {
                bits[j] = 1;
            }
        }
    }
    const int blockSize = 1 << 18;
    for (int from = 0; from <= NMAX; from += blockSize) {
        int to = std::min(from + blockSize - 1, NMAX);
        for (pii& p : smallPrimes) {
            for (; p.second <= to; p.second += p.first) bits[p.second] = 1;
        }
    }
    bits.flip();
    //iterate over primes
    int64_t sum(0);
    int cnt(0);
    for (int p = bits._Find_first(); p < bits.size(); p = bits._Find_next(p)) {
        sum += p;
        cnt++;
    }
    assert(bits.count() == cnt);
    std::cout << "sum = " << sum << std::endl;
    std::cout << "cnt = " << cnt << std::endl;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //ifstream fin;
    //ofstream fout;
    //fin.open("input.txt");
    //fout.open("output.txt");
    //clock_t launch=clock();
    
}
