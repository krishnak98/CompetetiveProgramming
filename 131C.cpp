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

const int maxn = 35 ; 
ll nCr[maxn][maxn] ; 

void pre() 
{
	for(int i = 0 ; i < maxn ; ++i ) 
	{
		nCr[i][0] = 1 ;
		nCr[i][i] = 1 ; 
	}
	for(int i = 2 ; i < maxn ; ++i ) 
	{
		for(int j = 1 ; j < i ; ++j ) 
		{
			nCr[i][j] = nCr[i-1][j-1] + nCr[i-1][j] ; 
		}
	}
}


int main() 
{
	ios::sync_with_stdio(0) ; 
	int n , m , t ;
	cin >> n >> m >> t ; 
	pre() ; 
	ll ans = 0 ; 
	int girl = 1 ; 
	while ( t - girl > n ) girl++ ; 
	while ( girl <= m && ( t - girl ) <= n && ( t- girl ) >= 4 ) 
	{
		ans += nCr[n][t-girl]*nCr[m][girl] ; 
		++girl ; 
	}
	cout << ans << endl ; 
	return 0 ; 
}

