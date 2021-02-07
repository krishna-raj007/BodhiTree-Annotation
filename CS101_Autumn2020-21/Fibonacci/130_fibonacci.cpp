#include<simplecpp>

main_program{
int n,k; int i=0, n1;

cin>> n>> k;
n1=n-1;
int x=0, y=1,z;
cout<< "0"<<endl;
while(i<n1)
{ cout<< y%k<< endl;
z=y;
y=(x+y)%k;
x=z%k;
i++;

  }
//Write your code here

}
