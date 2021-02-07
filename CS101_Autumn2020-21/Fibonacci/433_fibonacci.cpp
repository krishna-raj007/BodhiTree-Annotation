#include<simplecpp>


main_program{
long long int n,k,n1=0,n2=1,m=0;
cin>>n;
cin>>k;
for( long long int l=1;l<=n;l++){
if(l==1){
cout <<n1<<endl;
}
else if(l==2){
cout<<n2<<endl;}
else
{
     m=(n1+n2)%k;
     cout<<m<<endl;
     n1=n2;
     n2=m;

}
}
}
