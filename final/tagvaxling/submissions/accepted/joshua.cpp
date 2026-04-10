#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<ll>;
using vvi = vector<vi>;
using p2 = pair<ll,ll>;
const ll inf = 1e18;

#define repe(i, arr) for (auto& i : arr)
#define rep(i, b) for(ll i = 0; i < (b); ++i)
#define repp(i, a, b) for(ll i = a; i < (b); ++i)
#define all(x) begin(x),end(x)
#define sz(x) ((ll)x.size())


int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n;
    cin >> n;

    queue<ll> in;
    rep(i, n)
    {
        in.push(i+1);
    }
    
    stack<ll> stick;

    vector<ll> order(n);
    ll i = 0;
    rep(i, n) cin >> order[i];

    while (in.size())
    {
        while (stick.size() && stick.top()==order[i])
        {
            i++;
            stick.pop();
        }
        stick.push(in.front());
        in.pop();

    }

    while (stick.size() && stick.top() == order[i])
    {
        i++;
        stick.pop();
    }

    if (i == n)
    {
        cout << "JA\n";
    }
    else
    {
        cout << "NEJ\n";
    }


    return 0;
}

