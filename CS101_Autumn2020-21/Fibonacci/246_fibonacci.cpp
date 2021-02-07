#include<simplecpp>

main_program{
//Write your code here
int n;
cin>>n;
cout<<" ";
double k;
cin>>k;
double i=2;
double F[i];
for(int i=2;i<=n;i++)
{
   F[0]==0; F[1]==1;
   F[i]=F[i-1]+F[i-2];
   F[i]++;
    cout<<F[i]%k<<endl;
}
}
