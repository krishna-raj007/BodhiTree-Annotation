#include<simplecpp>

main_program{
int large=-1,temp=0,a;
while(temp!=-1){
     cin>>a;
     temp=a;
     large=max(temp,large);
}
cout<<large;
}

