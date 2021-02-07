#include<simplecpp>

main_program{
int a=0,b=1,n,c,k,j;
cin >>n >>k;
cout <<0<<"\n";
cout <<1<<"\n";
repeat(n-2){
c=a+b;
a=b;
b=c;
j=b%k;
cout<<j<<"\n";

}
}
