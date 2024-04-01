#include<bits/stdc++.h>

using namespace std ;
void fibonacci(long long n )
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    long long f1 = 1 , f2 = 1 , fn = 0 ;
    vector<long long> vc ;
    vc.push_back(1) ;
    while ( fn < n )
    {
        fn = f1 + f2 ; 
        vc.push_back(fn) ; 
        f1 = f2 ; f2 = fn ;
    }
    cout << n << " = " ;
    long long sum = 0 ;
    for( int i = vc.size()-1 ; i >= 0 ; i--)
    {
        if( sum + vc[i] <= n )
        {
            cout << vc[i] ;
            sum += vc[i] ;
            if( sum < n ) cout << " + " ;
        }
        
    }
}

int main()
{
    long int n ; cin >> n ;
    fibonacci( n ) ;
}