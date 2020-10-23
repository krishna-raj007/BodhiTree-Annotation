#include<simplecpp>

main_program{
int a=0,b=1,nt;
int f=0;

int k;
cin>>k;
int i=1;
if(k==0)
{
    cout<<"0";

}
else{
while(i>0)
{
nt=a+b;
a=b;
b=nt;
i++;
if(nt==k)
{

    cout<<i-2;
    f=1;
    break;
}


}
if(f==0)
{
    cout<<"-1";
}
}

}

