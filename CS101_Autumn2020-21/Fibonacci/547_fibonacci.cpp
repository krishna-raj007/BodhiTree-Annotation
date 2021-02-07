#include <simplecpp>

main_program{

    long long int n, k, p=0, q=1, addition;

// declare variables

    cin>> n>> k;
    //input 

    cout<< p<<endl; 

    cout <<q<<endl; 
    //first two terms

    for ( long int i=3; i<=n; i=i+1)

    {
    addition = ( p+q)% k;
    //problem solved

    cout << addition<< endl;

    p=q;

    q=addition;

}


}