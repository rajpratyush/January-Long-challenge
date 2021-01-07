#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <math.h> 
#include <stdio.h> 

#define ll long  long
#define ld long double
#define mod 1000000007
#define inf 1e16
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define lbd lower_bound
#define ubd upper_bound
#define pf push_front
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define FOR(i, a, b)    for(int i=a; i<b; i++)
#define FORrev(i,a,b)  for(int i= a-1; i>=b; i--)
#define vi vector <int>
#define vll vector <ll> 
#define pll pair<ll, ll> 
#define input(a,n) FOR(i,0,n) cin>>a[i]
#define mems(x, y) memset(x, y, sizeof(x))
#define debug(a) cout<<a<<" "
#define debugarr(arr) for(auto x: arr) cout<<x<<" " 
#define sz(a) int((a).size())
#define ThisIsKKC ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

const int MAX_N = 1e5 + 5;

 
void solve(){
    // cout.precision(10);
    // cout << fixed;
    // priority_queue <int, vector<int>, greater<int> > pq;

    ll n,k,d;
    cin >> n >> k >> d;
    vll a(n);
    input(a,n);
    ll sum = 0;
    for ( int i = 0; i < n; i++)
    {
        sum += a[i];

        /* code */
    }
    sum /= k;
    cout << min(sum , d) << endl;
    
    
}
int main(){
    ThisIsKKC
	clock_t clk = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #else
        //online submission
    #endif
    int t = 1;    
    cin >> t;
    while(t--){  
        solve();
    }
    // cerr << '\n'<<"Time (in ms): " << double(clock() - clk) * 1000.0 / CLOCKS_PER_SEC << '\n';
    return 0;
}
