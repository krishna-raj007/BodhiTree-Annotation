#include<simplecpp>
#include<iostream>
using namespace std;
int fibonacci(int n,int k)
{

    if(n==0||n==1)
       {
       return n;
       }
     else
       {
        int result=fibonacci (n-1,k)+fibonacci (n-2,k);
        return result%k;
       }


}
int main()
{

int n,k;
cin>>n>>k;
for(int i=0;i<n;i++)
{
  cout<<fibonacci(i,k) << endl;

}
return 0;

}
