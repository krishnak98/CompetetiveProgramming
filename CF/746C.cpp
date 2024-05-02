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
//	freopen("input.txt","r",stdin) ; 
//	freopen("output.txt","w",stdout) ; 
	int s , x1 , x2 , t1 , t2 , d , p ; 
	cin >> s >> x1 >> x2 >> t1 >> t2 >> p >>  d ;
	if ( t2 <= t1 ) 
	{
		cout << abs(x1-x2)*t2 << endl ; 
		return 0 ; 
	}
	else 
	{
		ll ans = (abs(x1-x2)*t2) ; 
		ll curr = 0 ; 
		int chk = 0 ; 
		while ( p <= s && p >= 0 ) 
		{

			if ( p == x1 ) chk = 1 ; 
			p += d ; 
			curr += t1 ; 
			if ( p == s || p == 0 ) d *= -1 ;
			if ( p == x2 && chk ) 
			{
				cout << min ( ans , curr ) << endl ; 
				return 0 ; 
			}
		}
	}
	return 0 ; 
}

