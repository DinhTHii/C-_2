#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int a , b ; cin >> a >> b ;
    int n = 0 ;
    int sum = 0 ;
    for( int i = a ; i <= b ; i++ )
    {
        sum = i ;
        for( int j = 1 ; j <= (i)/2 ; j++ )
        {
            if( i % j == 0 )
            {
                sum -= j ;
                cout << j << " " ;
            } 
        }
        n += sum ;
        cout << "\n" ;
    }
    cout << n << endl ;

}