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

const int maxn = 1e6 + 5 ; 
int prime[maxn] ; 

void pre() 
{
	rep(i,maxn) prime[i] = 1 ; 
	prime[0] = prime[1] = 0 ; 
	for(int i = 2 ; i < maxn ; ++i ) 
	{
		if(!prime[i]) continue; 
		for(int j = 2*i ; j < maxn ; j += i ) 
			prime[j] = 0 ; 
	}
	rep(i,maxn-1) prime[i+1] += prime[i] ; 

}


int main() 
{
	ios::sync_with_stdio() ; 
	pre();  
	int a , b,  k ;
	cin >> a >> b >> k ; 
	int l = 1 , r = b - a + 1 ; 
	if ( prime[b] - prime[a-1] < k ) {
		cout << "-1\n";
		return 0; 
	}
	while ( l < r )
	{
		int mid = (l+r)/2 ; 
		bool chk = 1;  
		for(int x = a ; x <= b - mid + 1 ; ++x ) 
		{
			if ( prime[x+mid-1] - prime[x-1] >= k ) 
				chk &= 1; 
			else 
			{
				chk &= 0 ; 
				break ; 
			}
		}
		if ( !chk ) 
			l = mid + 1 ; 
		else 
			r = mid ; 
	}
	cout << l << endl ; 
	assert(l==r) ; 
	return 0 ; 
}