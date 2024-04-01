#include <bits/stdc++.h>

using namespace std ;
int doixung(long n ){
    long a = 0 , b = 0 ;
    for ( long i=n ; i > 0 ; i/=10){
        a = i%10 ;
        b = b*10 + a ;
    }
    return b ;
}
bool kiemtra( long b ){ 
    if( b <= 1 ){
        return false ;
    }
    for( long j = 2 ; j*j <= b ; j++){
        if( b % j == 0 ){
            return false ;                
        }
    }
    return true ;
}
int main (){
    long n ;
    cin >> n ;
    
    bool dapso = kiemtra( doixung ( n ) ) ;
    cout << doixung( n ) << " " << (dapso ? "YES" : "NO") ;
    

}