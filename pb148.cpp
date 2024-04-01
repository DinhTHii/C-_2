#include<bits/stdc++.h>
#define f( x , y ) for( int x = 0 ; x < y ; x++ )
using namespace std ;

int main ()
{
    string n ;   
    cout << "<?xml version=1 encoding=UTF-8?>\n" ;
    while( getline( cin , n ) )
    {
        vector<string>vc,vcc;
        stringstream ss ( n ) ;
        string m ;
        while( ss >> m )
        {
            vc.push_back(m) ;
        }
        string luu = vc.back() , cuoi = "" ;
        f( i , luu.size() )
        {
            if( luu[i] != '|' )
            {
                cuoi += luu[i] ;
            }
            else
            {
                vcc.push_back(cuoi) ;
                cuoi = "" ;
            }
        }
        if( stoi(cuoi)>= 5.0 )
        {
        cout << "<Student>\n"  ;
        cout << "     <LastName>"  ;
        for( int i = 0 ; i < vc.size()-1 ; i++ )
        {
            cout << vc[i] << " " ;
        }
        cout << vcc[0] << "</LastName>\n" ;
        cout << "     <FirstName>" << vcc[1] << "</FirstName>\n"  ;
        cout << "     <Mark>" << cuoi << "</Mark>\n" << "</Student>\n";
        }
    }
}