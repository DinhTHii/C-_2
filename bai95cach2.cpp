#include <bits/stdc++.h> 

using namespace std ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n , k ;
    cin >> n >> k ;
    int A[n] ;
    int B[n] ;
    vector < int > vec , tor ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> A[i] ; 
    }
    for( int i = 0 ; i < n ; i++)
    {
        cin >> B[i] ;
    }

    for( int i = n - k ; i < n ; i++)
    {
        vec.push_back(A[i]) ;       
    }

    for( int i = 0 ; i < n - k ; i++)
    {
        vec.push_back(A[i]) ;
    }
    
    for( int i = k ; i < n ; i++)
    {
        tor.push_back(B[i]) ;
    }
    for( int i = 0 ; i < k ; i++)
    {   
        tor.push_back(B[i]) ;
    }
    for( int i = 0 ; i < n ; i++)
    {
        cout << vec[i] + tor[i] << " " ;
    }
}