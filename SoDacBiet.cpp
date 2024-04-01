#include<bits/stdc++.h>

using namespace std ;

int tinh(int n )
{
    int baonhiuso = 0 ;
    while(n > 3 )
    { 
        int dem = 0 ;
        for(int i = 1 ; i <= n ; i++)
        {
            if( n%i==0) dem++ ;
        }
        if( dem == 3 ) baonhiuso++ ;
        n-- ;
    }
    return baonhiuso ;
}
int main()
{
    int n ; cin >> n ; 
    cout << tinh( n ) ;
}