#include<simplecpp>

main_program{
//Write your code here
int n,k;
cin>>n>>k;
int first=0,second=1,next;
for(int i=0;i<n;i++)
{   cout<<first<<endl;
    next=( (first%k)+(second%k))%k;
    first=second;
    second=next;
    }

    }


