#include<simplecpp>
main_program
{
int f1=0,f2=1;
int n, k;
cin >>n >> k;
cout <<f1%k<<endl;
cout<< f2%k <<endl;
for(int i =1;i<=(n-2);i++)
{
 int f3;
 f3=(f1%k)+(f2%k);
 cout<<f3%k<<endl;
 f1=f2%k;
 f2=f3%k;
}

}



