#include<simplecpp>
main_program
{
int n=0,x,i=0,j=1;
int k=0;

cin>>x;
while(true)
{
k=i+j;
i=j;
j=k;
n++;
if (x==k)
{
    cout<<n+1;

    break;}
    else if (k>x)
    {
        cout<<"-1";
        break;
    }

}
}
