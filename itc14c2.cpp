#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    int n ; cin >> n ;
    int a[n] ;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
    }
    sort( a , a + n ) ;
    int dem = 0 , sum = a[0] ;
    for(int i = 1 ; i < n ; i++ )
    {
        if( sum < a[i] )
        {
            sum = a[i] ;
        }
        else 
        {
            sum++ ;
        }
    }
    cout << sum+2 ;

}
