#include<simplecpp>
main_program
{
    int x,y,z;
    cin>>x;
    cin>>y;
    long int a;
    z=1;
    a=1;
    repeat(x)
    {
        a=((a%y)*(z%y))%y;
        z++;
    }
    cout<< a%y;
}
