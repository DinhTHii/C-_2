#include <bits/stdc++.h> 
 
using namespace std ;

int main (){
    int n, m ;
    cin >> n >> m ;
    int S = gcd( n , m ) ;
    cout << m - S ;
}