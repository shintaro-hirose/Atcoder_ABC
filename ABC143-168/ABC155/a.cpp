#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
// #define debug(a) cout << "["; rep(i,a.size()) cout << a[i] << ", "; cout<<"]"<< endl;

const ll mod = 1000000007;

int main() {
    int a,b,c; cin >> a >> b >> c;
    unordered_set<int> us;
    us.insert(a);
    us.insert(b);
    us.insert(c);
    if(us.size() == 2){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}