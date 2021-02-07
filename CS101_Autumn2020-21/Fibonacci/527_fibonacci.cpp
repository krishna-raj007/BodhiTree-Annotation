#include<simplecpp>

main_program
{
long int n,k,t1=0,t2=1,mid;
cin>>n>>k;


for(long int i=1;i<=n;i++)
 {
 if((1<=n)&&(n<=100000)&&(1<k)&&(k<=100000))
 {

 cout<<t1<<endl;
 mid=t2%k;
 t2=t2%k+t1%k;
 t1=mid;
 }
 else break;
 }

}
