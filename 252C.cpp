#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ; 
typedef unsigned long long ull ; 
typedef vector<int> vi ; 
typedef vector<vi> vii ;
typedef vector<ll> vl ;
typedef vector<vl> vll ;
 typedef set<int> si ; 
typedef map<int,int> mii ; 
typedef map<ll,ll>  mll ; 
typedef map<string,int> msi ;
typedef set<ll> sl ; 
typedef set<char> sc ; 

#define MOD (ll)(1e9+7)
#define eps 1e-6
#define rep(i,n) for(int i = 0 ; i < n ; ++i ) 
#define pb push_back 
#define mp make_pair 
#define DEBUG(x)		cout << '>' << #x << ':' << x << endl;
#define F first 
#define S second 
#define all(s) s.begin,s.end() 

int main() 
{
	ios::sync_with_stdio() ; 
	int n , d ;
	cin >> n >> d ;
	ll a[n] ; 
	rep(i,n) cin >> a[i] ;
	ll ans = 0; 
	for(int i = 0 ; i < n ; ++i ) 
	{
		ll till = upper_bound(a,a+n,d+a[i]) - (a+i+1) ;
		ans += (till*(till-1))/2 ; 
	}
	cout << ans << endl ; 
	return 0 ; 
}