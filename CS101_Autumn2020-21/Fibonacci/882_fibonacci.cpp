#include<simplecpp>

main_program{
int n,k,i=0,n1=0,n2=1,sum,s2;
cin >> n >>k;
cout<<n1%k<<endl;
cout<<n2%k<<endl;
repeat(n-2){
sum=n1+n2;
s2=n1%k + n2%k;
cout <<s2%k<<endl;
n1=n2%k;
n2=sum%k;
}
wait(10);




}
