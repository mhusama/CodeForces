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
const ll N = 1e3 + 10;
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




void dfs(ll u, vector<ll>G[], ll n, vector<ll>&vis){

    vis[u] = 1;
    for(auto v :G[u]){

        if (vis[v] == 0)
            dfs(v,G,n,vis);

    }

}



int main() {

    debugMode();
    fastio;
    //test();

        ll n,m;
        cin >> n >> m;

        vector<ll>G[n+1];
        vl2d languages(n, vl(m+1,0));
        vector<ll>vis(n);
        ll ct=0;

        for(ll i = 0; i < n; i++){ // person i
            ll ne; cin >> ne;
            if (ne != 0)
                ct=-1;

            for(ll j = 0; j < ne; j++){// number of languages he knows = j
                ll lang; cin >> lang;
                languages[i][lang]=1;

                for(ll k = 0; k < i; k++){// person k
                    if (languages[k][lang] == 1){
                        G[i].push_back(k);
                        G[k].push_back(i);
                    }

                }

            }//end of ne loop





        }//end of n loop


        for(ll i = 0; i < n; i++){
            if (vis[i] != 0)
                continue;
            else{
                ct++;
                dfs(i,G,n,vis);
            }

        }

        cout << ct << nl;











}
