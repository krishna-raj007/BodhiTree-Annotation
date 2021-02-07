#include<simplecpp>

main_program{
//Write your code here
int n1=0;
int n2=1;
 long long int n,k;
cin>>n;
cin>>k;
 long long int a;
 int r1=n1%k;
 int r2=n2%k;
 int r3;

cout<<(r1)<<endl;
cout<<(r2)<<endl;

int i=1;
while(i<=n-2)
{
r3=(r1+r2)%k;
cout<<r3<<endl;
r1=r2;
r2=r3;
i++;
}

}
