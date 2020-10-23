#include<simplecpp>
main_program
{
 long int n,c=0,p=0,q=1,r=1;
 cin>>n;

while(n!=p)
{
    p=q;
    q=r;
    r=p+q;
    c++;
    if (n<p)
    { c=-1;
        break;

    }
}
cout<<c;

}
