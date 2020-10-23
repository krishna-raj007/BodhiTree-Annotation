#include<simplecpp>
main_program{
int n,i=2,k=1;double s=4.0;
cin>>n;
 repeat(n)
 {
     s=s-4.0*k/((2*i)-1);
     i=i+1;k=k*-1;
 }
 cout<<s<<endl;
}
