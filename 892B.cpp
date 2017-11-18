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
	int a[n] ;
	for(int i = 0 ; i < n ; ++i )
	{
		cin >> a[i] ;
	}
	int b[n] = {0} ; 
	int val = n ;

	for(int i = n-1 ; i >= 0 ; --i  )
	{	
		b[i] += 1 ; 
		//DEBUG(val); 
		//DEBUG(i);	
		if ( i >= val ) 
			b[i] -= 1 ; 
		val = min ( val , i - a[i] ) ; 
		
	}
	//rep(i,n) cout << b[i] << " ";
	//cout << endl ; 
	cout << accumulate(b,b+n,0)  << endl ; 
	return 0 ; 
}