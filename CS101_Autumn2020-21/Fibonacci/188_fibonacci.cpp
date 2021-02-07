#include<simplecpp>

main_program{
 unsigned long long int n, k;
 cin>>n>>k;
 int f0=0, f1=1;
 long int f, temp=f1, term;
 f=f0+f1;

 cout<<f0%k<<endl;
 cout<<f1%k<<endl;
 cout<<f%k<<endl;

 repeat(n-3)
 {
   term=f+temp;
   cout<<term%k<<endl;
   temp=f;
   f=term;
 }


}
