#include<simplecpp>
#include<iomanip>
main_program{
   long unsigned int n,k,a=0,f=1,x;
   cin>>n>>k;
   cout<<"0"<<endl<<"1"<<endl;
   repeat(n-2){
     x=(f%k+a%k)%k;
     a=f;
     f=x;
     cout<<x<<endl;
    }
}
   