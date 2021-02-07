#include<simplecpp>

main_program{
//Write your code here
int F0=0,F1=1,F2,i,p,k;
cin>>p>>k;
cout<<F0%k;  cout<<"\n"; cout<<F1%k;   cout<<"\n";
for(i=2;i<p;i++){
F2=F1+F0;
cout<<F2%k; cout<<"\n";
F0=F1;  F1=F2;}

}
