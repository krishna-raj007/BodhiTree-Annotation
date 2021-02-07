#include<simplecpp>

main_program{
//Write your code here
long long int n,k,f,a=0,b=1;cin>>n>>k;
if(n==2)cout<<a%k<<endl<<b%k<<endl;
else if(n>2){cout<<a%k<<endl<<b%k<<endl;
        repeat(n-2){f=(a+b)%k;
                    cout<<f<<endl;a=b;b=f;}}
else if(n==1)cout<<a%k;
}
