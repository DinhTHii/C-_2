#include<bits/stdc++.h>

using namespace std ;

int main()
{
    short n , s , r ; cin >> n >> s >> r ;
    short a[s] , b[r] ;
    for(int i = 0 ; i < s ; i++ )
    {
        cin >> a[i] ;
    } 
    for(int i = 0 ; i < r ; i++ )
    {
        cin >> b[i] ;
    }
    short dem = 0 ;
    

    for(int i = 0 ; i < s ; i++ )
    {
        bool khoican = false ;
        for(int j = 0 ; j < r ; j++ )
        {
            if(a[i] - 1 == b[j] or a[i] == b[j] or a[i] + 1 == b[j] )
            {
                b[j] = 0 ;
                khoican = true ;
                break ;
            }
        }
        if( !khoican ) dem++ ;
    }
    cout << dem ;
}