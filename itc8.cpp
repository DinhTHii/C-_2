#include<bits/stdc++.h>

using namespace std ;

void in()
{
    
    
}
int main()
{
    int e = 2 ;
    while( e-- )
    {
    int n ; cin >> n ;
    vector <string> vc ;
    vector <int> x ;
    set <int> z ;
    cin.ignore() ;
    while( n-- )
    {
        
        string m ;
        getline( cin , m ) ;
        for( int i = 0 ; i < m.size() ; i++ )
        {
            string w = "" ;
            if( m[i]  == ':' )
            {
                w = m[i-2] ;
                w += m[i-1] ;
                x.push_back(stoi(w)) ;
            }
            
        }
        bool dung = (x[0] <= x[1] ) ;
        for( int t = 0 ; t < 24 ; t++ )
        {
            if( t >= x[0] && t <= x[1] )
            {
                z.insert(t) ;
            }
            else if( !dung && (t >= x[0] || t <= x[1]) )
            {
                z.insert(t) ;
            }
        }
        x.clear() ;
    }
    if(z.size() == 24 ) cout << "bubbletea is delicious!"<< endl ;
    else 
    {
        cout << "huhuhu" << endl ;
    }
    }
}