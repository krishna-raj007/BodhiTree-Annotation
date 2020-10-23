#include<simplecpp>

main_program{
int n,a=0,b=1,i=1;
cin>>n;
while(true)
{
    if(n==0)
    {
        cout<<"0";
        break;
    }
    if(n==a)
       {

       cout<<i;
    break;
}
    if(n==b)
    {

       cout<<i+1;
        break;
    }


    else if(n>a)
        {
    a=a+b;
    b=b+a;
    i=i+2;
    }
  if(n<a)
  {


     cout<<"-1";
     break;
  }

    }


}
