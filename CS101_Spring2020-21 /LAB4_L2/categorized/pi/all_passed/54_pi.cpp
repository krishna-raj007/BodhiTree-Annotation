#include<simplecpp>
#include<math.h>
main_program{
double c=4,d,e,i,n;
cin>>n;
n=n*1.0;
for(i=1.0;i<=n;i++){
    d=2*i+1;
    e=pow(-1.0,i);
    c=c+4*e*1.0/d;
}
cout<<c;


	//Write your code here

}
