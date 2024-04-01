#include<bits/stdc++.h> 
using namespace std ;
int main ()
{
    int n ;
    cin >> n ;
    long long a[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    } 
    
    for(int i = 0 ; i < n ; i++)
    {
        int dem = 0 , s = 0 ;
        while( a[i] != 0)
        {
        s = a[i]%10 ;
        if( s == 4 || s == 7 ) dem++ ;
        a[i] /= 10 ;
        }    
        cout << ((dem == 4 || dem == 7) ? "Yes\n" : "No\n") ;

    }
}