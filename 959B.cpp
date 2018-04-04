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
	int n , k , t ; 
	cin >> n >> k >> t ;
	string str[n] ; 
	msi m ; 
	rep(i,n) {
		cin >> str[i] ;
		m[str[i]] = i ; 
	}
	int a[n] ; 
	rep(i,n) cin >> a[i] ; 
	int best[n] ; 
	rep(i,n) best[i] = a[m[str[i]]] ; 
	while(k--) 
	{
		int x ;
		cin >> x ;
		int curr = INT_MAX ; 
		int v;  
		si s ; 
		while(x--) 
		{
			cin >> v ; 
			--v ; 
			s.insert(v) ; 
			curr = min ( curr , best[v] ) ; 
		}
		for(auto i : s ) 
			best[i] = curr ; 
	}
	ll ans = 0 ; 
	while(t-- )
	{
		string word;  
		cin >> word ; 
		ans += best[m[word]] ; 
	}
	cout << ans << endl ; 
	return 0 ; 
}