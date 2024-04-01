#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ; cin >> n ;
    int a[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
    auto max = max_element( a , a + n ) ;
    auto min = min_element( a , a + n ) ;
    int dem = 0 ;
    for ( int i = 0 ; i < n ; i++)
    {
        if ( *max <= a[i] )
        {
            dem++ ;
        }
        if ( *min >= a[i] )
        {
            dem++ ;
        }
    }
    cout << dem ;
}