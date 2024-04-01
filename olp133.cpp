#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n ;
    map<string,string> mp ;
    
    while( getline( cin , n ) )
    {   
        if( n.empty() ) break ;
        vector<string> vc ;
        string s ;
        stringstream nn ( n ) ;
        while( nn >> s )
        {
            vc.push_back(s) ;
        }
        mp[ vc[1] ] = vc[0] ;
        
    }
    string m ; 
    while( cin >> m )
    {
        auto x = mp.find(m) ;
        if( x != mp.end() )
        {
            cout << x->second << endl;
        }
        else
        {
            cout << "eh\n" << endl ;
        }
     
    }

}