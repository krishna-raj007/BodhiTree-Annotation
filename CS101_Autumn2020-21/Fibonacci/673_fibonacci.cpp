#include<simplecpp>
main_program{
 long long int n,k;
 cin>>n>>k;
 long long int F0=0,F1=1,r1,r2;
 r1=F0%k;
 cout<<r1<<endl;
 r2=F1%k;
 cout<<r2<<endl;
 long long int Fi,Ri;
 repeat(n-2){
 Fi=F0+F1;
 Ri=Fi%k;
 cout<<Ri<<endl;
 F0=F1;
 F1=Fi;
 }
}
