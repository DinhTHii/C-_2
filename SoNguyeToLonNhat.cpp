#include<bits/stdc++.h> 
using namespace std ;
int main (){
    int n ;
    cin >> n ;
    int a[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    sort( a , a + n , greater<int>() ) ;
    for( int i = 0 ; i <  n ; i++){
        int c = 0 ;
        for( int j = 2 ; j*j < a[i] ; j++){
            if( a[i] % j == 0 ){
                c++ ;
            }
        }
        if( c == 0 ){ cout << a[i] ;
        return 0 ; 
        }
    }
}