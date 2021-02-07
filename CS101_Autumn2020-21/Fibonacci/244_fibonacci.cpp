#include<simplecpp>

main_program{
int n,first=0,second=1,next,k;

cout<<"enter the number of terms to be printed"<<"  ";
cin>>n;

cout<<"modulo"<<endl;
cin>>k;

cout<<"fibonacci series:"<<endl;

for(int i=0;i<n;i++)
{cout<<first<<endl;
next = (first+second)%k;
first = second;
second = next;
}

}
