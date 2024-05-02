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


int main()
{
	ios_base::sync_with_stdio(0);	
	si sx ;
	int n ;
	cin >> n ;
	int a[n] ;
	for(int i = 0 ; i < n ; ++i ) cin >> a[i] ; 
	for(int i = 0 ; i < n ; ++i ) 
	{
		sx.insert(a[i]) ; 
	}
	if ( sx.size() == 2 && n%2 == 0  ) 
	{
		int val = a[0] ; 
		int cnt = 0 ; 
		for(int i = 0 ; i < n ; ++i ) 
		{
			cnt += (val == a[i] ) ; 
		}
		if ( cnt == n/2 ) 
		{

		cout << "YES\n";
		for ( auto i : sx ) cout << i << " " ; 
		cout << endl ; 
		return 0 ; 
		}
		
	}
	cout << "NO\n";

	return 0 ;
}


