#include<simplecpp>

main_program{
//Write your code here
long long int n;
long long int k;
cin>>n>>k;
long long int t1 = 0;
long long int t2 = 1;
int modulo;

for(long long int i=1; i<(n+1); i++){
                modulo = t1%k;
                long long int tnext = t1+t2;
                t1=t2;
                t2=tnext;
                 cout<<modulo<<endl;
                   }

}
