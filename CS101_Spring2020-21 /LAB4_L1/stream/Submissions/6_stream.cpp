#include<simplecpp>
main_program{
bool flag=true;

int a,s=0;
while(flag){
cin>>a;
if(a>s)
s=a;
if (a==-1)break;
}
cout<<s<<endl;
}
