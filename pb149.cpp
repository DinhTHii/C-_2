#include<bits/stdc++.h>

using namespace std ;

typedef struct {
    int day;
    int month;
    int year;
} date;

typedef struct abc{
    int id;
    string name;
    date birthday;
    double mark;
    bool operator < (const abc other )
    {
        return mark < other.mark ;
    }
} student;

void in() 
{
    #ifndef ONLINE_JUDGE
        freopen( "int.cpp" , "r" , stdin ) ;
        freopen( "out.cpp" , "w" , stdout ) ;
    #endif
}

void out() 
{
    short n ; cin >> n ;
    student s[n] ;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> s[i].id ;
        cin.ignore() ;
        getline( cin , s[i].name ) ;
        cin >> s[i].birthday.day >> s[i].birthday.month >> s[i].birthday.year ;
        cin >> s[i].mark ;
    }
    //sort( s , s + n ) ;
    for( int i = 0 ; i < n ; i++ )
    {
        if( s[i].mark  >= 5.0 )
        {
            cout << s[i].id << ", " << s[i].name << ", " << s[i].birthday.day << "/"<< s[i].birthday.month << "/" << s[i].birthday.year << ", " << s[i].mark << endl ;
        }
    }
    cout << "**********\n" ;
    for( int i = 0 ; i < n ; i++ )
    {
        if( s[i].birthday.year == 2003 )
        {
            cout << s[i].id << ", " << s[i].name << ", " << s[i].birthday.day << "/"<< s[i].birthday.month << "/" << s[i].birthday.year << ", " << s[i].mark << endl ;
        }
    }
    cout << "**********\n" ;
    for( int i = 0 ; i < n ; i++ )
    {
        stringstream ss ( s[i].name ) ;
        string m ;
        while( ss >> m )
        {
        }
        if( m == "Tuan" )
        {
            cout << s[i].id << ", " << s[i].name << ", " << s[i].birthday.day << "/"<< s[i].birthday.month << "/" << s[i].birthday.year << ", " << s[i].mark << endl ;
        }
    }
}
int main()
{
    in() ;
    out() ;
    return 0 ;
}