#include<bits/stdc++.h>

using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    long long n , c ;
    cin >> n >> c ;
    long long a[n] ;
    for( int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
    sort( a , a + n ) ;
    long long sum = 0 ;
    for( int i = n - 1 ; i >= 0 ; i-- )
    {
        if( c >= sum + a[i] )
        {
            sum += a[i] ;
        }
    }
    cout << sum ;
}