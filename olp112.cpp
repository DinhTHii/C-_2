#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ; cin >> n;
    vector<int> vec(n) , vc , kq ;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> vec[i] ;
    }
    int max = 0 ;
    for( int i = 0 ; i < n ; i++ )
    {
        if( max < vec[i] )
        {
            max = vec[i] ;
        }
    }
    int f1 = 0 ,f2 = 1 , fn = 0 ;
    vc.push_back(1);
    while( fn < max )
    {
        fn = f1 + f2 ;
        vc.push_back(fn) ;
        f1 = f2 ;
        f2 = fn ;
    }
    for( int i = 0 ; i < n ; i++ )   
    {
        bool co = true ;
        for( int j = 0 ; j < vc.size() ; j++ )
        {
            if( vec[i]%vc[j] == 0 )
            {
                auto x = find( vc.begin() , vc.end() , vec[i]/vc[j]) ;
                if( x != vc.end() || vec[i] == 0 )
                {
                    co = false ;
                    cout << "Yes" << endl ;
                    break ;
                }
            }
        }
        if( co ) cout << "No" << endl ;
    }
}