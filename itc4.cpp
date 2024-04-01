#include<bits/stdc++.h>

using namespace std ;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n ;
    cin >> n ;
    int a[n] ;
    int b[n] ;
    for( int i = 0 ; i < n ; i++){
        cin >> a[i] ;
        cin >> b[i] ;
    }
    int S = 0 , SS = 0 , E = 0 , EE = 0 ;
    int max = 0 , maxx = 0 ;
    for( int i = 0 ; i < n ; i++){  
        if( max < a[i] ){
            max = a[i] ;
            E = b[i] ;
            S = i ;
        }
        if( maxx < b[i] ){
            maxx = b[i] ;
            EE = a[i] ;
            SS = i ;
        }
    }
    int D = 0 , DD = 0 , F = 0 , FF = 0 ;
    for( int i = 0 ; i < n ; i++){  
        if( S < i ){
            if( D < b[i] ){ D = b[i] ; F = a[i] ;
            }
        }
        if(SS > i ){    
            if( DD < a[i] ){ DD = a[i] ; FF = b[i] ;
            }
        }
    }
    if( D + max > DD + maxx ) {
        if( D + max >= E + F ) cout << D + max << endl ;
        else cout << E + F << endl ;
    }
    else {
        if( DD + maxx >= EE + FF ) cout << DD + maxx << endl ;
        else cout << EE + FF << endl ; 
    }
}