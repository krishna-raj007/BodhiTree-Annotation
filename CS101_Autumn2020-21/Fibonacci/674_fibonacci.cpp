#include<simplecpp>

main_program{
//Write your code here
 int n,k,x;
 int a,b,c;
a=0;c=0;
b=1;
cin>> n>>k;
cout<<0<<endl<<1<<endl;
repeat(n-2){
c=(a+b)%k;
a=b%k;
b=c%k;
x=c%k;

cout<<x<<endl;
}

}
