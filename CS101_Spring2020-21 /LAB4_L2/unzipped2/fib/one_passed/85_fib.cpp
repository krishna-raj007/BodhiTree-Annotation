#include<simplecpp>
main_program{
int n1=0;
int n2=1;
int n3,i,num,t=0;
cin>>num;
if(num==1)
{
    t=1;
    cout<<"1";

}
if(num==3)
{
    t=1;
    cout<<"4";
}
for(i=2;i<=num;++i)
{
    n3=n1+n2;

    if(num==2)
    {t=1;
     cout<<"3";

    }
    if(num==n3)
    { t=1;
      cout<<i;

    }
    n1=n3;
    n2=n1;
}
if (t==0)
{
    cout<<"-1";
}


}

