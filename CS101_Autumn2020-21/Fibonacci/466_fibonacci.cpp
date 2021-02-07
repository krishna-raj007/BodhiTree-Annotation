#include<simplecpp>

main_program{
//Write your code here
int y, k, m=0, n=1,j;
cin>>y>>k;
cout<<m%k<<"\n"<<n%k<<"\n";
repeat(y-2){j=m+n;cout<<j%k<<"\n";m=n;n=j;};

}
