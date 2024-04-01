#include<bits/stdc++.h>

using namespace std ;

void in() 
{
    // #ifndef ONLINE_JUDGE
    //     freopen( "int.cpp" , "r" , stdin ) ;
    //     freopen( "out.cpp" , "w" , stdout ) ;
    // #endif
}
void out() 
{
    int m ; cin >> m ;
    cin.ignore() ;
    string n ; cin >> n ; 
    vector <char> max , dem , sum ;
    bool dung = true ;
    for( int i = 0 ; i < m ; i++ )
    {
        if( n[i] >= '0' && n[i] <= '9' )
        {
            sum.push_back(n[i]) ;
            if( i < m && (n[i+1] < '0' || n[i+1] > '9') )
            {
                dem = sum ;
                sum.clear() ;
                if( max.size() > dem.size() ) dung = true ;
                else if( max.size() < dem.size() ) dung = false ;
                else 
                {
                    for( int i = 0 ; i < (int)max.size() ; i++ )
                    {
                        if( max[i] > dem[i] )
                        {
                            dung = true ; break;
                        } 
                        if( max[i] < dem[i] )
                        {
                            dung = false ; break;
                        } 
                    }
                }
                if(!dung)
                {
                    max = dem ;
                    sum.clear() ;
                }
            }
        } 
    }
    dem = sum ;
    sum.clear() ;
    if( max.size() > dem.size() ) dung = true ;
    else if( max.size() < dem.size() ) dung = false ;
    else 
    {
        for( int i = 0 ; i < (int)max.size() ; i++ )
        {
            if( max[i] > dem[i] )
            {
                dung = true ; break;
            } 
            if( max[i] < dem[i] )
            {
                dung = false ; break;
            } 
        }
    }
    if(!dung)
    {
        max = dem ;
        sum.clear() ;
    }
    while( max[0] == '0' )
    {
        max.erase( max.begin() ) ;
    }
    
    for( auto x : max )
    {
        cout << x ;
    }
}
int main()
{
    in() ;
    out() ;
    return 0 ;
}