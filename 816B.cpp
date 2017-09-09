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

const int maxn = 200005 ; 
int main()
{
	ios_base::sync_with_stdio(0);	
	int n , k ,q ;
	cin >> n >> k >> q ;
	int c[maxn]  ; 
	rep(i,maxn) c[i] = 0 ; 
	int l , r ; 	
	rep(i,n) 
	{
		cin >> l >> r ;
		c[l]++; 
		c[r+1]--;
	}
	for(int i = 0 ;i < maxn-1 ; ++i ) 
	{
		c[i+1] += c[i] ; 
	}
	for(int i = 0 ; i < maxn ; ++i ) 
	{
		if ( c[i] >= k ) 
			c[i] = 1 ;
		else
			c[i] = 0 ;
	}
	for(int i = 0 ; i < maxn-1 ; ++i ) 
	{
		c[i+1] += c[i] ;
	}
//	for(int i = 0 ; i <= 5 ; ++i ) 
//	{
//		cout << i << " "<<   c[i] << endl  ;
//	}
	
	for(int i = 0 ; i < q; ++i ) 
	{
		cin >> l >> r; 
		cout << c[r] - c[l-1]  << endl ; 
	}
	return 0 ;
}


