#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    int n ; cin >> n ;
    int dem = 0 , summ = 1 , sum = 1 ;
    while( n > 0 )
    {
        if( n - sum >= 0 )
        {
            dem++ ;
            n -= sum ;
        }
        else
        {
            n -= sum ;
        }
        summ += 1 ;
        sum += summ  ;
        
    }
    cout << dem ;
}