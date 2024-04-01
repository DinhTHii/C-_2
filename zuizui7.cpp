#include<bits/stdc++.h>

using namespace std ;


int ktr( long long a[] , int n )
{
    int sum = INT_MIN ;
    for(int i = 0 ; i < n ; i++)
    {
        int dem = 0 ;
        while( a[i]%2 == 0 )
        {
            dem++ ;
            a[i] /= 2 ;
        }
        if( dem > sum ) sum = dem ;
    }
    return sum ; 
}
int main()
{
    int n ; cin >> n ;
    long long a[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
    cout << ktr( a , n) ;
}