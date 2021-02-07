#include<simplecpp>

main_program{
//Write your code here
int k,nextTerm=0;
long double n,F0=0,F1=1;
cin>>n>>k;
for(int i=1;i<=n;++i)
{
    if(i==1)
    {
    cout<<F0<<endl;;
    continue;
    }
    if(i==2)
    {
    cout<<F1<<endl;
    continue;
    }
    nextTerm=F0+F1;
    F0=F1;
    F1=nextTerm;
    nextTerm=nextTerm%k;
    cout<<nextTerm<<endl;}
}
