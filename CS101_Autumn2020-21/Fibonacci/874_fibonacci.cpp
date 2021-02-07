#include<simplecpp>

main_program
{
long long int n,f,k=0,m=1,p;
cin>>n>>f;
cout<<"0\n"<<1%n<<endl;
repeat((n-2)/2)
{
p=(m%f+k%f)%f;cout<<p;
k=m;
m=p;
}
}

