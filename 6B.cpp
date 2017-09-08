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
	char a[105][105] ;
	rep(i,105) rep(j,105) a[i][j] = '.' ;
	int n , m ;
	char prez ;
	cin >> n >> m >> prez ;
	string str ;
	for(int i = 1 ; i <= n ; ++i ) 
	{
		cin >> str ;
		for(int j = 0 ; j < m ; ++j ) 
		{
			a[i][j+1] = str[j] ;
		}
	}
	ll ans = 0 ; 
	set<char> done ; 
	done.insert(prez) ; 
	for(int i = 1 ; i <= n ; ++i ) 
	{
		for(int j = 1 ; j <= m ; ++j ) 
		{
			if ( a[i][j] == prez ) 
			{
				
				if ( a[i][j-1] != '.' && done.find(a[i][j-1]) == done.end()  ) 
				{
					ans++;
					done.insert(a[i][j-1]) ; 
				}


				if ( a[i][j+1] != '.' && done.find(a[i][j+1]) == done.end() )  
				{
					ans++;
					done.insert(a[i][j+1]) ; 
				}
						
				if ( a[i+1][j] != '.' && done.find(a[i+1][j]) == done.end() ) 
				{
					ans++;
					done.insert(a[i+1][j]) ; 
				}


				if ( a[i-1][j] != '.' && done.find(a[i-1][j]) == done.end() )  
				{
					ans++;
					done.insert(a[i-1][j]) ; 
				}


			}
		}
	}
	cout << ans << endl ; 
	

	return 0 ;
}


