#include<bits/stdc++.h>

using namespace std ;

void in() 
{
    // #ifndef ONLINE_JUDGE
    //     freopen( "int.cpp" , "r" , stdin ) ;
    //     freopen( "out.cpp" , "w" , stdout ) ;
    // #endif
}

void out() 
{
    short n , m ; cin >> n >> m ;
    n /= 50 ; m /= 30 ;
    if( n >= m*4 )
    {
        cout << m*4 ;
    }
    else
    {
        cout << n ;
    }
}
int main()
{
    in() ;
    out() ;
    return 0 ;
}