#include<simplecpp>
main_program{
long int a=0,s=0,f1=1,n,k,r1,r2;
cin>>n>>k;
r1=a%k;
r2=f1%k;
cout<<r1<<endl;
cout<<r2<<endl;
repeat(n-2){
            s=(a+f1)%k;
            cout<<s%k<<endl;
            a=f1;
            f1=s;}

}


