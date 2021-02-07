#include<simplecpp>

main_program{
long int F0=0,F1=1,k,n,F;
cin>>n;cin>>k;
cout<<F0%k<<endl;
while(n>=2){
F=F0+F1;
cout<<F%k<<endl;
F1=F0;
F0=F;
n--;}

}

