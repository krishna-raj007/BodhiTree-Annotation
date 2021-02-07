#include<simplecpp>

main_program{
//Write your code here
long int n, k, c=1;
cin>>n>>k;
long int rem1=0%k,rem2=1%k, rem3;
for (;c<=n;c++){
    cout<<rem1<<endl;
    rem3=(rem1+rem2)%k;
    rem1=rem2;
    rem2=rem3;
    }
}
