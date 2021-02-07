#include<simplecpp>
main_program{
int m, n1=0, n2=1, n3, k;
cin>>m>>k;
cout<<n1%k<<endl;
cout<<n2%k<<endl;
repeat(m-2){
n3=n1+n2;
cout<<n3%k<<endl;
n1=n2;
n2=n3;
}
}
