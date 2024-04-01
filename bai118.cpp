#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    string n ;
    getline ( cin , n ) ;
    vector <string> vc ;
    string m = "" ;
    
    for(int i = 0 ; i < (int)n.size() ; i++ )
    {
        if( n[i] >= '0' && n[i] <= '9' )
        {
            m += n[i] ;
            if ( n[i+1] < '0' || n[i+1] > '9' )
            {
                vc.push_back(m) ;
                m = "" ;
            }
        }
        
    }
    long long sum = 0 ;
    for( auto x : vc)
    {
        sum += stoi(x) ;
    }
    cout << sum ;
}