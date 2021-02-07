#include<simplecpp>

main_program{
long int F0=0, F1=1, n, k, R1, R2, sum=0;
cin>>n>>k;
R1=F0%k;
R2=F1%k;
cout<<R1<<endl;
cout<<R2<<endl;

repeat(n-2){
sum=(F0+F1)%k;
cout<<sum%k<<endl;
F0=F1;
F1=sum;


}







}
