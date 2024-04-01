#include<bits/stdc++.h>

using namespace std ;

int main()
{
    string n ;
    getline( cin , n ) ;
    vector<string>vc ;
    string m ;
    for( int i = 0 ; i < (int)n.length() ; i++ )
    {
        if( ( n[i] >= '0' && n[i] <= '9' ) || n[i] == '.' )
        {
            m += n[i] ;
            if( n[i+1] != '.' )
            {
                if( n[i+1] < '0' || n[i+1] > '9' )
                {
                    vc.push_back(m) ;
                    m = "" ;
                }
            }
            
        }
    }
    for( auto x : vc )
    {
        cout << x << " " ;
    }
}