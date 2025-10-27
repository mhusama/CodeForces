#include <bits/stdc++.h>
#define nl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define getv getVec(n)
#define vl vector<ll>
#define vc vector<char>
#define vpll vector<pair<ll,ll>>
#define fin for(ll i = 0; i < n; i++)
#define fjn for(ll j = 0; j < n; j++)
#define fjm for(ll j = 0; j < m; j++)
#define fiv for(ll i = 0; i < v.size(); i++)
#define fitm for(auto it = m.begin(); it != m.end(); it++)
#define fitrm for (auto it = m.rbegin(); it != m.rend(); it++)
#define fits for(auto it = s.begin(); it != s.end(); it++)
#define ld long double
#define vl2d vector<vector<ll>>
#define vc2d vector<vector<char>>


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<long long, null_type,less<long long>, rb_tree_tag,tree_order_statistics_node_update>

using namespace std;

inline void debugMode() {

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}


vector<ll> getVec(ll n) {
    vector<ll> vec(n);
    for (ll i = 0; i < n; i++) {
        cin >> vec[i];
    }
    return vec;
}

bool compare(pair<ll,ll> &p1, pair<ll,ll> &p2)
{
    if (p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second > p2.second;
}

bool cmp(pair<ll,ll> &p1, pair<ll, ll> &p2)
{
    if (p1.second == p2.second)
        return p1.first > p2.first;
    return p1.second < p2.second;
}



int ceildiv(int n, int div){
    if (n % div == 0)
        return n/div;
    else
        return (n+div-1)/div;
}


//__builtin_popcount()

void test()
{

    ll t1;
    cin >> t1;
    for (ll q1= 1; q1 <= t1; ++q1){

        ll n,x;
        cin >> n >> x;

        vl v;
        ll num=0;
        for(ll i = 0; i < n-1; i++){
            if (i == x)
                num++;
            v.push_back(num);
            num++;
        };

        if (n == x)
            v.push_back(x-1);
        else
            v.push_back(x);


        fin{
            cout << v[i] << " ";
        };
        cout << nl;






    }// end of test loop


}



int main() {

    debugMode();
    fastio;
    test();














}
