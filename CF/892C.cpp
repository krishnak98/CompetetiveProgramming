#include<bits/stdc++.h>
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
	freopen("input.txt","r",stdin) ; 
	freopen("output.txt","a",stdout) ; 
	int n ;
	cin >> n;
	int a[n] ;
	for(int i = 0; i < n ;++i ) cin >> a[i] ;
	ll res = 0 ;
	int cnt = 0 ;
	int gc = a[0] ; 
	for(int i = 0  ; i < n ; ++i ) 
	{
		cnt += (a[i] == 1 ) ; 
		gc = __gcd ( gc  , a[i] ) ; 
	}
	if ( gc != 1 ) 
	{
		cout << "-1\n";
		return 0 ;
	}
	if ( cnt ) 
	{
		cout << n - cnt << endl ; 
		return 0 ; 
	}
	int minn = n ; 
	for(int i = 0 ; i < n ; ++i ) 
	{
		int gcd1 = a[i] ; 
		for(int j = i+1 ; j < n ; ++j ) 
		{
			gcd1 = __gcd(gcd1 , a[j] ) ; 
			if ( gcd1 == 1 ) 
			{
				minn = min ( minn , j - i   ) ;
				break ; 
			}
		}
	}

	cout << n - 1 + minn << endl ; 
	return 0 ; 
}