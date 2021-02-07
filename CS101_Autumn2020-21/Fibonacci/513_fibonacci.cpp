#include<simplecpp>

main_program{
//Write your code here
long long int n , f1=0,f2=1,next=0,k;
cin >> n >> k;
for(int i=1; i<=n;i++)
{
if(i==1)
{cout << f1 <<endl;
continue;
}
if(i==2)
{cout << f2 << endl;
continue;
}
next = (f1+f2)%k;
cout << next << endl;
f1=f2;
f2=next;

}
}
