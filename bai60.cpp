#include<bits/stdc++.h>

using namespace std ;
int xuathienle( const vector <int> vec ){
  int W = 0 ;
  for( int Q : vec ){
    W ^= Q ;
  }
  return W ;
}
int main(){
  int  n ;
  cin >> n ;
  vector <int> vec(n) ;
  for( int i = 0 ; i < n ; i++){
    cin >> vec[i] ;
  }
  cout << xuathienle(vec) ;
}

