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
	int a , b , f , k ;
	cin >> a >> b >> f >> k ;
	int curr = b-f ;
	if ( curr < 0 ) {
		cout << "-1\n";
		return 0 ; 
	}
	ll ans = 0; 
	int next = 0 ; 
	for(int i = 0 ;i < k ; ++i ) 
	{

	//	DEBUG(curr);
	//	DEBUG(i);
	//	DEBUG(ans) ; 
		if ( i % 2 == 0 )   // going left ( i.e towards x = a )  
		{
			next = 2*a - 2*f  ; 
			if ( i == k-1 )  // only needs to go till the end of the journey and not the next stop  
				next = a-f ; 
			if ( curr <  next )  // needs to fill gas as he wont be able to go to  next station 
			{
				ans++ ;
				curr = b ; 		// filling gas 
			}
			curr -= next ;    // going to next station 

		}
		else    // going right ( i.e towards x = 0 ) 
		{
			next = 2*f; 
			if ( i == k-1 ) 
				next = f ; 
			if ( curr < next )  // needs to fill gas as he wont be able to go to next station 
			{
				ans++;
				curr = b ;   // filling gas 
			}
			curr -= next ;  // going to next station 
		}
		if ( curr < 0 ) // wont be able to reach the next station 
		{
			cout << "-1\n";
			return 0 ; 
		}
		
	}
	cout << ans << endl ; 	
	

	return 0 ;
}


