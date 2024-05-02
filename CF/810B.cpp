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
#define INF (int)(1<<29) 
#define rep(i,n)   		for(int i=0; i < n ; i++ ) 
#define DEBUG(x)		cout << '>' << #x << ':' << x << endl;
#define pb push_back
#define mp make_pair
#define F first
#define S second 


int main()
{
	ios_base::sync_with_stdio(0);	
	int n , f ;
	cin >> n >> f ;
	vl ans ; 
	int k , l ;
	ll sum = 0 ; 
	for(int i = 0 ; i < n ; ++i ) 
	{
		cin >> k >> l ;
		sum += min ( k , l ) ;
		if ( k >= l ) 
			continue ; 
		else 
		{
			if ( 2*k >= l ) 
				ans.push_back(l-k) ; 
			else
				ans.push_back(k); 
		}
	}
	sort ( ans.begin() , ans.end() ) ;
	reverse ( ans.begin()  , ans.end() ) ;
	for(int i = 0 ; i < f  ; ++i ) 
	{
		if ( i >= ans.size() ) 
			break ; 
		sum += ans[i] ; 
	}
	cout << sum << endl ; 	

	
	

	return 0 ;
}


