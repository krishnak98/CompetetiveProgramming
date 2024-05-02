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
	//freopen("input.txt","r",stdin) ; 
	//freopen("output.txt","a",stdout) ; 
	int n ;
	cin >> n ;
	int a[n] , b[n] ;
	for(int ii = 0 ; ii < n ; ++ii ) cin >> a[ii] ; 
	rep(i,n) cin >> b[i] ;
	ll val = 0 ;
	rep(i,n) val += a[i] ;
	sort ( b , b + n ) ;
	reverse ( b , b + n ) ;
	if ( val <= b[0] + b[1] ) 
		cout << "YES\n";
	else
		cout << "NO\n" ;




	return 0 ; 

}
