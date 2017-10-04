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
	int n ;
	cin >> n ;
	int a[n] ;
	for(int i = 0; i < n ; ++i ) 
	{
		cin >> a[i] ; 
	}
	int dp[n+1][3] ;
	for(int i = 0 ; i <= n; ++i) 
	{
		dp[i][1] = dp[i][0] = dp[i][2] = 100 ; 
	}
	dp[0][0] = 0 ; 
	for(int i = 1 ; i <= n ; ++i ) 
	{
		dp[i][0] = min ( dp[i-1][0] + 1   , min ( dp[i-1][1] + 1 , dp[i-1][2] + 1 ) ) ; 
		if ( a[i-1] == 1 || a[i-1] == 3  ) 
		{
			dp[i][1] = min ( dp[i-1][2] , dp[i-1][0] ) ; 
		}
		if ( a[i-1] == 2 || a[i-1] == 3  ) 
		{
			dp[i][2] = min ( dp[i-1][0] , dp[i-1][1] ) ; 
		}
	}
	cout << min ( dp[n][0] , min (  dp[n][1] , dp[n][2] )  ) << endl ; 
	return 0 ;
}


