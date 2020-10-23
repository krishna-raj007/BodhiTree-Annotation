#include<simplecpp>

main_program{
 int n;
 double x = 0;
 cin>>n;
 for(int i=1;i<=n;i++){
  x += ((pow(-1,i))*1.0)/((2*i)+1);
 }
double sum;
sum = 4*(1+x);
cout<<sum<<endl;
}
