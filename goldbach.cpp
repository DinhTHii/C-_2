#include <bits/stdc++.h>

using namespace std ;

bool ktr ( int n )
{
   if( n == 2 ) return true ;

   for(int i = 2 ; i*i <= n ; i++)
   {
      if(n%i == 0) return false ;
   }
   return true ;
}

int choi( int n , int k )
{
   int b = n ;
   vector <int> vec ;
   while( b > 1 )
   {
      if( ktr(b) ) 
      {
         vec.push_back( b ) ;
      } 
      b-- ;
   }
   int dem = 0 ;
   for(int i = 0 ; i < vec.size() ; i++)
   {
      int A = 1 ;
      A += vec[i] + vec[ i + 1 ] ;
      for(int j = 0 ; j < vec.size() ; j++)
      {
         if( A == vec[j] ) 
         {
            dem++ ;
         }
      }
   }
   cout << (dem >= k ? "YES" : "NO") << endl ;

   return k ;
}

int main()
{
   int T ; cin >> T ;
   int n[T] , k[T] ;
   for(int i = 0 ; i < T ; i++)
   {
      cin >> n[i] >> k[i] ;
   }
   for(int i = 0 ; i < T ; i++)
   {
      choi( n[i] , k[i] ) ;
   }
}