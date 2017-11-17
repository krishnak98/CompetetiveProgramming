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
//	freopen("input.txt","r",stdin) ; 
//	freopen("output.txt","a",stdout) ; 
	int n , m ;
	cin >> n >> m ;
	string a[n] ;
	rep(i,n) cin >> a[i] ;
	ll ans = 1 ; 
	for(int i = 0 ; i < m ; ++i ) 
	{
		set<char> sc ; 
		for(int j = 0 ; j < n ; ++j ) 
		{
			sc.insert(a[j][i]) ; 
		}	
		ans *= sc.size() ; 
		ans %= MOD; 
	}
	cout << ans << endl ; 
	return 0 ; 
}
