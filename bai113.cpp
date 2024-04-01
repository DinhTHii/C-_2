#include<bits/stdc++.h>

using namespace std ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n , k ;
    cin >> n >> k ;
    cin.ignore();
    string a[n] ;
    for( int i = 0 ; i < n ; i++ )
    {
        getline( cin , a[i] ) ;
    }
    for(auto x : a )
    {
        for( int i = 0 ; i < x.size() ; i++ )
        {
            if(x[i] >=65 && x[i]<= 90)
            {
                char z = x[i] + k ;
                if( z > 90 ) z = z - 26 ;  
                cout << z ;
            }
            else cout << x[i] ;
        }
        cout << endl ;
    }
}