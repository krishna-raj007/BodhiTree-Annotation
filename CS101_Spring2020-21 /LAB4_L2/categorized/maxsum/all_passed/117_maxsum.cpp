#include<simplecpp>

main_program{
int n,a,b;
cin>>n;
cin>>a;
cin>>b;
int max=a+b;
for(int i=3; i<=n; i++)
 {

    a=b;
    cin>>b;
    if(max<a+b)
    {
        max=a+b;
    }
 }
 cout<<max;


 }



