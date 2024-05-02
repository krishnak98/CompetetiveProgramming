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

void solve() 
{
	int n , p ; 
	cin >> n >> p ; 
	int edges = 2*n + p ; 
	int i = 1;  
	int tot ; 
	while ( edges ) 
	{
		if ( i <= p % n ) 
		{
			tot = p/n + 3 ; 
			while ( tot ) 
			{
				int j = ( i + tot - 1 )%n + 1 ; 
				cout << i << " " << j << endl ; 
				tot-- ; 
				edges-- ; 
			}

		}
		else 
		{
			tot = p/n + 2 ; 
			while ( tot ) 
			{
				int j = ( i + tot - 1 ) % n + 1 ; 
				cout << i << " " << j << endl ; 
				--tot ; 
				edges-- ;
				//if ( edges ) return ; 
			}
		}
		++i ;
	} 


}





int main() 
{
	ios::sync_with_stdio(0) ; 
	int t ;
	cin >> t ; 
	while ( t-- ) solve() ;
	return 0 ; 
}

