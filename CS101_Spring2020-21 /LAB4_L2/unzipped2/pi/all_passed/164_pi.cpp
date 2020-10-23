#include<simplecpp>

main_program
{
    int n,s=1;
    float z=0,p;
    cin>>n;
    for(int i=0; i<n+1; i++)
    {
        p=1.0/(2*i+1)*s;
        s=s*(-1);
        z=z+p;
    }
    double answer=4*z;
    cout<<answer<<endl;
}
