#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ; 
typedef unsigned long long ull ; 
typedef vector<int> vi ; 
typedef vector<vi> vii ;
typedef vector<ll> vl ;
typedef vector<vl> vll ;
typedef set<int> si ; 
typedef map<int,int> mii ; 
typedef map<ll,ll>  mll ; 
typedef map<string,int> msi ;
typedef set<ll> sl ; 
typedef set<char> sc ; 

#define MOD (ll)(1e9+7)
#define eps 1e-6
#define rep(i,n) for(int i = 0 ; i < n ; ++i ) 
#define pb push_back 
#define mp make_pair  
#define DEBUG(x)		cout << '>' << #x << ':' << x << endl;
#define F first 
#define S second 
#define all(s) s.begin,s.end() 


bool compare(pair<int,int> fir ,pair<int,int> sec ) 
{
	return abs(fir.F) + abs(fir.S) < abs(sec.F) + abs(sec.S) ;
}










void move ( pair<int,int> st , pair<int,int> sto ) 
{

	if (st.F > sto.F )  // X coordinate 
	{
		cout << "1 " << abs(st.F - sto.F) << " " << "D\n" ; 
	}
	else if ( st.F < sto.F )
	{
		cout << "1 " << abs(st.F - sto.F) << " " << "U\n" ; 
	
	}
	if ( st.S > sto.S ) 
	{
		cout << "1 " << abs(st.S - sto.S) << " " << "L\n" ; 
	
	}
	else if ( st.S < sto.S ) 
	{
		cout << "1 " << abs(st.S - sto.S) << " " << "R\n" ; 
	
	}
}






int main() 
{
	ios::sync_with_stdio() ; 
	int n ; 
	cin >> n ;
	pair<int,int> p[n] ; 
	rep(i,n) cin >>p[i].S >> p[i].F  ; 

	int ans = 2*n ;
	sort(p , p + n , compare) ;  
	for(int i = 0 ; i < n ; ++i ) 
	{
		if(p[i].F != 0 ) ans += 2  ; 
		if(p[i].S != 0 ) ans += 2 ; 
	}

	cout << ans << endl ; 
	for(int i = 0 ; i < n ; ++i ) 
	{
		move(mp(0,0) ,p[i]) ; 
		cout << "2\n";
		move(p[i],mp(0,0)) ; 
		cout << "3\n";
	}
	
	return 0 ; 
}