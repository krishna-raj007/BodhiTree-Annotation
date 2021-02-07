#include<simplecpp>
main_program{
//Write your code here
int n,k,t1=0,t2=1,t;
cin>>n>>k;
cout<<t1%k<<endl;
cout<<t2%k<<endl;
repeat(n-2){t=(t1+t2)%k;
            t1=t2;
            t2=t;
            cout<<t<<endl;
            }
}
