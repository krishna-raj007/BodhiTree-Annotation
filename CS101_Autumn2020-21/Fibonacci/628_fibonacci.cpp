#include<simplecpp>

main_program{
//Write your code here

long long int n, k , x;
 cin>>n>>k;
 int x1=0,x2=1;
 cout<<x1<<endl;
 cout<<x2<<endl;
 for(int i=0; i<(n-2); i=i+1){
   x=x1+x2;
   x1=x2%k;
   x2=x%k;
   cout<<x%k<<endl;


 }
}
