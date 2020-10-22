#include <simplecpp>

main_program{

int a[20],i=0,max,n;

while(a[i++]!=-1)
{

    cin>>a[i];


}
n=i;
max=0;
for(i=0;i<n;i++)
{if(a[i]>max)
    max=a[i];}

    cout<<max;


}
