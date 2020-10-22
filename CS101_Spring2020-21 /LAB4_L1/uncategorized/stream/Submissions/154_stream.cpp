#include<simplecpp>
main_program{
long int x,c;
cin>>x;
if(x==-1||x<=0)
    cout<<"invalid.";
else
{c=1;
while(1)
    { if(x==-1) break;
      else if(c<=x)
            c=x;
            cin>>x;
    }
cout<<c;
}}
