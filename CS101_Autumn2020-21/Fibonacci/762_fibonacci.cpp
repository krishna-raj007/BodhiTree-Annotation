#include<simplecpp>

main_program{

long int a1=1,a0=0,an,an1,an2;

long int n,k;

cin>>n>>k;

cout<<a0%k<<endl;

cout<<a1%k<<endl;

an1=a0;

an2=a1;

for(int i=n;i>2;i--){

an=(an1%k)+(an2%k);

int m=an%k;

cout<<m<<endl;

an1=an2;

an2=an;
}
}
