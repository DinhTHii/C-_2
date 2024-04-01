#include <bits/stdc++.h> 
using namespace std ;
    
int main (){
    int n ;
    cin >> n ;
    string m ;
    cin >> m ;
    int S = 0 ;
    for( int i = 0 ; i < m.length() ; i++){
        if( m[i] == '1' ){ S++ ; 
            if(m[ i + 1 ] == '0') S++ ;
            else continue;
            if( m[ i + 2 ] == '0') S++ ;
        }
        
    }
    cout << S ;
}