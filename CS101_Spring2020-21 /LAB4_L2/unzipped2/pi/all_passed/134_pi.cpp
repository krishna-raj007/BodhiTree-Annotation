#include<simplecpp>
main_program{
    int n,i;
    double sum=0;
cin>>n;
for(i=0;i<=n;i++){
    sum=sum+4*(pow(-1,i))*1/(2*i+1);
}
cout<<sum;
}
