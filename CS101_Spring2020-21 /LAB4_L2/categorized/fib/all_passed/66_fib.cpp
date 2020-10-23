
#include<simplecpp>

main_program
{
int n,fibnxt,fibnlas1=0,fibnlas2=1,i=0;
cin>>n;
do
{

    fibnxt=fibnlas1+fibnlas2;
    fibnlas2=fibnlas1;
    fibnlas1=fibnxt;
   //cout<<fibnxt<<" ";
    i++;

}
while(fibnxt<n);
if(fibnxt==n)
{
    cout<<i;
}
else if(n==0)
{
    cout<<"0";
}
else{
    cout<<"-1";
}
//cout<<fibnxt;




}
