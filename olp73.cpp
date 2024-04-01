#include<bits/stdc++.h>

using namespace std ;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string n ; 
    cin >> n ;
    int So = 0 , Dem = 0 ;
    if( n.size()%2 == 0 ) So = n.size()/2 ;
    else So = n.size()/2 + 1 ;
    for(int i = 0 ; i < So ; i++){
        if( n[i] != n[ n.size() - 1 - i ] ) Dem++ ;
    }
    cout << Dem ;
}