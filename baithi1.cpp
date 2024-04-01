#include<bits/stdc++.h> 
using namespace std ;
int main ()
{
    double n , s ;
    cin >> n ;
    if( n > 3 )
    {
        s = n*n + sqrt(n) + 1 ;
    }
    else if ( n <= 3 ) 
    {
        if(n != -3 ) s = (n*n*n + 2*n + 1 )/( n + 3 ) ;
        else 
        {
            cout << "Div by zero" ;
            return 0 ;
        }
    }
    cout << fixed << setprecision(6) << s ;
}
