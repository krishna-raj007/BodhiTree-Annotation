#include <simplecpp>

main_program{

long long int n1=0,n2=1,n3,i,numb,k;

cin>>numb>>k;


cout<<n1<<"\n"<<n2<<"\n";

for(i=2;i<numb;++i)
{
n3=n1%k+n2%k;
cout<<n3<<"\n";
n1=n2;
n2=n3;
}

}
