#include <bits/stdc++.h>
using namespace std;
typedef		vector<int>				 vi;
typedef 	vector<vi>				vii;
typedef		pair<int,int>			pii;
typedef		unsigned long long		ull;
typedef		long long				ll ;
typedef 	vector<ll> 				vl ;
typedef 	vector<vl> 				vll;
typedef 	map<string,int>  		msi;
typedef  	map<int,int> 			mii;
typedef 	set<int> 				si ;

#define MOD (int)(1e9+7)
#define rep(i,n)   		for(int i=0; i < n ; i++ ) 
#define DEBUG(x)		cout << '>' << #x << ':' << x << endl;
#define pb push_back
#define mp make_pair
#define F first
#define S second 
#define sz size() 
#define all(s) (s.begin(),s.end()) 
int main() 
{
	ios::sync_with_stdio(0) ; 
	int n , q ; 
	cin >> n >> q ; 
	int a[n] ; 
	rep(i,n) cin >> a[i] ;
	ll dp[n+5] ; 
	rep(i,n+5) dp[i] = 0 ; 
	while ( q-- ) 
	{
		int l , r ;
		cin >> l >> r; 
		dp[l-1]++ ; 
		dp[r]-- ; 
	}
	for(int i = 0 ; i < n ; ++i ) 
	{
		dp[i+1] += dp[i] ; 
	}
	sort ( dp , dp + n ) ; 
	reverse (  dp , dp + n ) ;
	sort ( a , a + n ) ; 
	reverse ( a , a + n ) ; 
	ll ans = 0 ;
	for(int i = 0 ; i < n ; ++i ) 
	{
		ans += a[i]*dp[i] ; 
	}
	cout << ans << endl ; 
	return 0 ; 
}

