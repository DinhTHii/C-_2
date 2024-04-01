#include<bits/stdc++.h>
using namespace std ;
struct sinhvien
{
    string ho , ten ;
    string diem ;
};
void in() 
{
    #ifndef ONLINE_JUDGE
        freopen( "int.cpp" , "r" , stdin ) ;
        freopen( "out.cpp" , "w" , stdout ) ;
    #endif
}
void out() 
{
    vector<sinhvien> vc ;
    string n ;
    cout << "<?xml version=1 encoding=UTF-8?>\n" ; 
    while( getline(cin , n ))
    {
        string ho , ten , diem , ktr ;
        vector <string> cui ;
        int i = 0 ;
        for( i ; i < n.size() ; i++ )
        {
            if( i != 0 && ((n[i] >= 'a' && n[i] <= 'z') || (tolower(n[i]) >= 'a' && tolower(n[i]) <= 'z')))
            {
                ktr += n[i] ;
            }
            else if ( i != 0 )
            {
                cui.push_back(ktr) ;
                ktr = "" ;
                if( n[i+1] >= '0' && n[i+1] <= '9' )
                {
                    break ;
                }
            }
        }
        for( i = i+1  ; i < n.size() ; i++ )
        {
            if(n[i] == '|' )
            {
                cui.push_back(ktr) ;
                ktr = "" ;
            }
            ktr += n[i] ;
        }
        for( int i = 0 ; i < cui.size()-2 ; i++ )
        {
            ho += cui[i] ;
            if( i < cui.size()-3 ) ho += " " ;
        }
        ten = cui[cui.size()-2];
        diem = cui.back() ;
        vc.push_back({ho,ten,diem}) ;
        if( stoi(diem) >= 5 )
        {
            cout << "<Student>\n" ;
            for( sinhvien x : vc )
            {
                cout << "     <LastName>"<< x.ho << "</LastName>\n" ;
                cout << "     <FirstName>" << x.ten << "</FirstName>\n" ;
                cout << "     <Mark>" << x.diem << "</Mark>\n" ;
            }
            cout << "</Student>\n" ;
        }
        cui.clear() ;
        vc.clear() ;
        
    }
    
}
int main ()
{
    in() ;
    out() ;
    return 0 ;
}