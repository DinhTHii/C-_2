#include<bits/stdc++.h>

using namespace std ;

bool nguyento( int n )
{
    if( n == 0 || n == 1 ) return false ;
    for(int i = 2 ; i*i <= n ; i++)
    {
        if(n%i == 0 ) return false ;
    }
    return true ;
}

int solon( int a[] , int n )
{
    int max = INT_MIN , m = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        if( nguyento(a[i]) )
        if( max < a[i] )
        {
            max = a[i] ; m = i ;
        } 
    }
    return m ;
}
int sobe( int a[] , int n )
{  
    int min = INT_MAX , m = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        if( nguyento(a[i]) )
        if( min > a[i] ) 
        {
            min = a[i] ; m = i ;
        }
    }
    return m ;
}
int main()
{
    int n ;
    cin >> n ;
    int a[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
    cout << abs(solon( a , n ) - sobe( a , n )) ;
}