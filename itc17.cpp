#include<bits/stdc++.h>

using namespace std ;

int main()
{
    short n ; cin >> n ;
    vector <string> vc(n) ;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> vc[i] ;
    }
    long long dem = 0 ;
    for( int i = 0 ; i < (int)vc.size() ; i++ )
    {
        dem++ ;
        if( vc[i][0] >= '0' && vc[i][0] <= '9')
        {
            if( dem != stoi(vc[i]))
            {
                cout << "something is fishy" ;
                return 0 ;
            }
        }

    }
    cout << "makes sense" ;
}