#include<simplecpp>

main_program{
long int n,m,i=1;
cin>>n>>m;
repeat(n-1){
cout<<n<<" "<<m<<" "<<i<<endl;
n=n*i%m;
i++;}
cout<<n<<endl;





}
