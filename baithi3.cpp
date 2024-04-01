#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    cin >> n ;
    int a[n] ;
    int b[n] ; 
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
        bool t = true ;
        for(int j = 0 ; j < a[i] ; j++ )
        {
            cin >> b[j] ;
            if( j%2 == 0 && b[j]%2 != 0 ) 
            { 
                t = false ; 
            }
            else if (j%2 == 1 && b[j]%2 != 1 ) 
            {
                t = false ;
            }
        }
        cout << ( t ? "Good\n" : "Bad\n") ;
    }
}