#include<simplecpp>

main_program
{
int t1=0, t2=1,t3;
int n,k;
cout<<"Enter number of terms and the modulo: ";
cin>>n>>k;

cout<<t1<<endl<<t2<<endl;
for(int i=0;i<(n-2);i++)
{
t3=t1+t2;
t1=t2;
t2=t3;
cout<<t3%k<<endl;
}

}
