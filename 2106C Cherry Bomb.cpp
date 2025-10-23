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


//__builtin_popcount()

void test()
{

    ll t1;
    cin >> t1;
    for (ll q1= 1; q1 <= t1; ++q1){

        ll n,k;
        cin >> n >> k;
        vl a(n),b(n);

        fin{
            cin >> a[i];
        };

        ll minus_counter=0;
        fin{
            cin >> b[i];
            if (b[i] == -1)
                minus_counter++;
        };

        if (minus_counter == n){
            ll amin = *min_element(a.begin(),a.end());
            ll amax = *max_element(a.begin(),a.end());

            ll bmax = amax-amin;
            cout << (k-bmax+1) << nl;
        }
        else{
            ll needed = -1;
            ll flag1 = 1;
            fin{
                if (b[i] == -1)
                    continue;

                else{
                    ll temp = a[i] + b[i];
                    if (needed == -1)
                        needed = temp;
                    else{
                        if (temp == needed)
                            continue;
                        else
                            flag1=0;

                    }
                }
            };
            ll amin = *min_element(a.begin(),a.end());
            ll bmax = needed - amin;

            ll flag2;
            if (bmax <= k)
                flag2 = 1;
            else
                flag2 = 0;

            ll amax = *max_element(a.begin(),a.end());
            ll bmin = needed - amax;

            if (bmin < 0 && flag2 == 1)
                flag2 = 0;
            cout << min(flag1,flag2) << nl;



        }











    }// end of test loop


}



int main() {

    debugMode();
    fastio;
    test();














}
