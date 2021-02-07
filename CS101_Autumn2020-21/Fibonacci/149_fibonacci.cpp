#include<simplecpp>
#include<iomanip>
main_program{
   long unsigned int n,k,f=0,f1=1,x;
   cin>>n>>k;
   cout<<"0"<<endl<<"1"<<endl;
   repeat(n-2){
     x=(f%k+f1%k)%k;
     f=f1;
     f1=x;
     cout<<x<<endl;
    }
}
