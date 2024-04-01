#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    int a[n] ;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
    }
    set<int>st ;
    long long sum = 0 ;
    
    for( int i = 0 ; i < n ; i++ )
    {
        if(i == 0 ) sum = a[i] ;
        else sum += a[i] ;
        for( int j = i+1 ; j < n ; j++ )
        {
            sum += a[j] ;
            st.insert(sum) ;
            sum -= a[j] ;
        }
    }
    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = i+1 ; j < n ; j++ )
        {
            sum = a[i] + a[j] ;
            for( int k = 0 ; k < n ; k++ )
            {
                if( k!=i && k!=j )
                {
                    sum += a[k] ;
                    st.insert(sum) ;
                    sum -= a[k] ;
                }
            }
        }
    }
    int dem = 0 , m = n ;     
    while( m-- )
    {
        sum = 0 ;
        for( int i = dem ; i < n ; i++ )
        {
            sum += a[i]  ;
            st.insert(sum) ;
        }
        dem++ ;
    }
    cout << st.size() << endl ;
    for( auto x : st )
    {
        cout << x << " " ;
    }

}