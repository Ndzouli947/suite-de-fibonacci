#include <iostream>
using namespace std ;

int fibonacci (int n )
{
    if ( n<=0)
    {
        return n ;
    }
    return fibonacci(n-1) + fibonacci(n-2) ;
}
int main ()
{
    int n ;
    cout<<"entrer un nombre : " ;
    cin >> n ;

    cout<<"les ternmes suivant la site de fibonacci sont : " <<n<< "terms :" ;
    for (int i = 0; i <n ; ++i)
    {
        cout<< fibonacci(i)<<" ";
    }
    return 0 ;
}
