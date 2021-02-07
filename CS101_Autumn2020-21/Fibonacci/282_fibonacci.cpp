#include<simplecpp>

main_program{
unsigned long long int Fi = 0, Fi1 = 1;
unsigned long long int n = 10,k;
cin>>n>>k;
cout<<Fi<<endl;
cout<<Fi1<<endl;
repeat(n-2){
unsigned long long int nextFi = Fi1;
Fi1 = Fi1 +Fi;
Fi = nextFi;
cout<<Fi1%k<<endl;
}
}
