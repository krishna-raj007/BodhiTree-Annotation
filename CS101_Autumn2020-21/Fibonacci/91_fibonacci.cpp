#include<simplecpp>

main_program{
long int n , k, F;
int l=0, m=1;
cin>>n>>k;
cout<<0<<endl;
cout<<1<<endl;
for(int p=1; p<=(n-2); p=p+1){
F=l+m;
cout <<(F)%k<<endl;

l=m%k;
m=F%k;}

}
