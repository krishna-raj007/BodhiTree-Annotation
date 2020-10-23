#include<simplecpp>

main_program{

 int n ;
 cin>>n;
 double sum;
for(int i = 0 ; i<=n ;i++) {
    sum = sum + pow(-1,i)*(1/(2.0*i+1));


 }
 cout<<(sum*4.0)<<endl;
}
