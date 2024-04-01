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
    short m ; cin >> m ;
    cin.ignore() ;
    string n ; cin >> n ; 
    string sum = "" ; 
    long long max = 0 , ktr = 0 ;
    for( int i = 0 ; i < m ; i++ )
    {
        if( n[i] >= '0' && n[i] <= '9' )
        {
            sum += n[i] ;
            if( i < m && (n[i+1] < '0' || n[i+1] > '9') )
            {
                ktr = stoi(sum) ;
                sum = "" ;
                if( max < ktr )
                {
                    max = ktr ;
                    ktr = 0 ;
                }
            }
        }
        
        
    }
    cout << sum ;
    if( max < ktr )
    {
        max = ktr ;
        ktr = 0 ; sum = "" ;
    }
    cout << max ;
}
int main()
{
    in() ;
    out() ;
    return 0 ;
}