#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n ; 
    cin >> n ;
    int sum = 0 , summ = 0 , s = 0 , dem = 0 ;
    if( n == 0 ) 
    {
        cout << "0" ;
        return 0 ;
    }
    for( int i = n ; i != 0 ; i/=10)
    {
        s = i%10 ;
        sum = sum*10 + s ;
    }
    for( int i = sum ; i != 0 ; i/=10)
    {
        s = i%10 ;
        summ = summ*10 + s ;
        dem++ ;
    }
    int chia = pow(10,dem-1) ;
    cout << sum/chia  ;
    if( (abs(summ) < 1 || abs(summ) > 9) )
    {
    int chiia = pow(10,dem-2) ;
    int vai = summ/10 ;
    
    if(abs(summ) >=100 )cout << setw(dem-2) << setfill('0') << abs(vai%chiia) ;
    cout << abs(sum%10) ;
    }
}