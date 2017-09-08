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
	int n , k ;
	cin >> n >> k;
	int a[n] ;
	for(int i = 0 ; i < n ; ++i ) 
	{
		cin >> a[i] ; 
	}
	vi sum ;
	int val = 0 ; 
	for(int j = 0 ; j < k ; ++j ) 
	{
		val += a[j] ;
	}
	sum.pb(val); 
	for(int i = 0  ; i < n-k ; ++i ) 
	{
		val+=-a[i]+a[i+k];
		sum.pb(val);
	}
	//rep(i,sum.size() ) cout << sum[i] << " " ;
	//ut << endl;
	cout << min_element(sum.begin() , sum.end() ) - sum.begin()+1  << endl ; 
	

	return 0 ;
}


