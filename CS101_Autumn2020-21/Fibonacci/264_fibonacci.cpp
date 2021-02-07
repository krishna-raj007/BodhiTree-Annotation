#include<simplecpp>

main_program{
int n, k;
cin>>n>>k;
int t0=0,t1=1,nextterm,output0,output1,output;
cout<<t0<<endl;
cout<<t1<<endl;
for(int i=1; i<=(n-2);i++)
{
nextterm=(t0%k+t1%k)%k;
output=nextterm%k;
cout<<output<<endl;
t0=t1;t1=nextterm;

}
}
