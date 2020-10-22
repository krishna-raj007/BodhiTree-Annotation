#include<simplecpp>

main_program{
long int n,m,z=0,i=1,a;
cin>>n;
cin>>m;
if (n==0)
cout<<"1"<<endl;
else{
    repeat(n){i=i*(z+1);
    z++;}	//Write your code here
}
a=i%m;
cout<<a<<endl;
}
