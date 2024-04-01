#include<bits/stdc++.h>

using namespace std ;

int main (){
    int n ;
    cin >> n ;
    int smm = 0 , D = 0 , R = 0 ;
    while( n > 0){
        smm = n % 10 ; 
        n /= 10 ;
        if( smm != 7 && smm  != 4 ){ 
            cout << "False" ;
            return 0 ; 
        }
        if( smm == 7 ) D++ ;
        else R++ ;
        
    }
    if ( R == D ) cout << "True" ;
    else cout << "False" ;

}
