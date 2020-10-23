#include <simplecpp>
main_program{
    long unsigned int n,i=0,k;
    double q=0,t,z;
    cin>>n;
    repeat(n+1)
    {k=(2*i+1);
    t=1.0/k+q;

        q=(-1)*t;
        i=(i+1);

    }
    if (q>0){
    z=4*q;}
    else z=(-1)*4*q;
    cout<<z;

}
