#include<bits/stdc++.h>

using namespace std ;

int main(){
    string n ;
    while(getline( cin , n ) ){
    

    for(int i = 0 ; i < n.size() ; i++){
        n[i] = tolower(n[i]) ;
    }

    string d = "" ;

    for(int i = 0 ; i < n.size() ; i++){
        if( n[i] >= 'a' && n[i] <= 'z'){
            d += n[i] ;
        }
    }

    bool sai = true ;

    for(int i = 0 ; i < d.size() ; i++){
        if( d[i] != d[d.size() - 1 - i ]){ 
            sai = false ;
        }
    }

    cout << (sai ? "Yes" : "No") << endl ;
    }

}