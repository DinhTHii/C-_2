#include<bits/stdc++.h>

using namespace std ;

int nhiphan( long long m ){
    long long  dem = 0 ;
    vector <unsigned long long > vec ;
    while( m > 0){
        vec.push_back(m%2) ;
        m /= 2 ;
        dem++ ;
    }
    for( long long i = vec.size() - 1 ; i >= 0 ; i-- ) cout << vec[i] ;
    cout << endl ;
    return dem ;
}

int main(){
    int n ;
    cin >> n ;
    while( n-- ){
        long long m  ;
        cin >> m ;
        nhiphan( m ) ;
    }
}