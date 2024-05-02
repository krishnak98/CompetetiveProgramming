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
	int n , k ; 
	cin >> n >> k ; 
	string s ;
	cin >> s ;
	int a[n] ; 
	char chk = 'a' ; 
	a[0] = (chk == s[0] ) ; 
	for(int i = 0 ; i < n ; ++i)  
	{
		if(s[i] == chk ) a[i] = a[i-1]  ; 
		else a[i] = a[i-1] + 1 ; 
	}	
	int ans = 0 ; 
	for(int i = 0 ; i < n ; ++i ) 
	{
		int till ; 
		if(chk == s[i])  
			till = upper_bound(a,a+n,a[i]+k) - (a+i) ; 
		else 
			till = upper_bound(a,a+n,a[i]+k-1) - (a+i) ; 
		ans = max(ans,till) ; 
	}
	chk = 'b' ; 
	a[0] = (chk == s[0] ) ; 
	for(int i = 0 ; i < n ; ++i)  
	{
		if(s[i] == chk ) a[i] = a[i-1]  ; 
		else a[i] = a[i-1] + 1 ; 
	}	
	for(int i = 0 ; i < n ; ++i ) 
	{
		int till ; 
		if(chk == s[i])  
			till = upper_bound(a,a+n,a[i]+k) - (a+i) ; 
		else 
			till = upper_bound(a,a+n,a[i]+k-1) - (a+i) ; 
		ans = max(ans,till) ; 
	}
	cout << ans << endl ; 

	return 0 ; 
}