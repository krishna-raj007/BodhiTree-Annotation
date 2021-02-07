#include<simplecpp>

main_program{
long long n,k;
cin>>n>>k;
long long x=0,y=1,a,z,i=1;

while(i<=n)
{
z = x;
a = x % k;
if(a<=0 && a!=0){
a = a + k;
}
x = x + y;
y = z;
cout<<a<<endl;
i++;

}

}
