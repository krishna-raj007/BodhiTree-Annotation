#include<simplecpp>

main_program{
int n;
cin>>n;
int k;
cin>>k;
int i=0,next=0,t1=0,t2=1;
cout<<0<<endl;
cout<<1<<endl;
while(i<=n)
{
{
next = (t1+t2)%k;
cout<<next<<endl;
t1=t2;
t2=next;
i++;
}

}
}

