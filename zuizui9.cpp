#include<bits/stdc++.h>

using namespace std ;

long long ktr(long long  n , long long m )
{
   long long sum = 0 ,dem = 0 ; 
    if( n % 2 != 0 ) n++ ;
   for( long long i = n ; i <= m ;i+=2 )
   {
    if( i %2 == 0 && i != 0 )
    {
        dem++ ;
        sum += i ;
    }
   }
   return (sum/dem) ;
}
int main ()
{
   long long n , m ;
   cin >> n >> m ;
   if( n > m ) 
   {
        cout << "No solution" ;
        return 0 ; 
   }
   cout <<  ktr( n , m );
}
