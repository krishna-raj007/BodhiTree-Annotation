#include<simplecpp>
#include<iostream>

int main(){
  long int f1=0,f2=1,nextTerm=0,n;
   cin>> n;

   long int k;
   cin>> k;

   cout<<f1%k<<endl<<f2%k<<endl;

   nextTerm=(f1+f2)%k;

   while(nextTerm <=n)
   {
      cout<<nextTerm%k<<endl;
      f1=f2;
      f2=nextTerm;
        nextTerm=(f1+f2)%k;

    }
    return 0;

    }
