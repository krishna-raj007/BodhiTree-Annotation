#include<simplecpp>

main_program{
int n,fibn,fibx,fiby,x,s=2,c=0;
cin>>x;
fiby=0;
fibx=1;
if (x==0)
{
    cout<<"0"<<endl;c=0;
    return 0;
}
if (x==1)
{
   cout<<"1";c=0;
}
repeat(1000){
fibn=fiby+fibx;
fiby=fibx;
fibx=fibn;
if (fibn==x&&fibn!=1)
{
    cout<<s<<endl;
    c=0;
    break;
}
if (fibn!=x)
   c=1;
   s++;}
   if(c==1)
   {
       cout<<"-1";
   }
   }
