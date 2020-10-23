#include<simplecpp>

main_program{
int n,a=0,b=1,s=0,i=0;
cin>>n;
while(s<n){
s=a+b;
a=b;
b=s;
i++;

}
if(s==0){
cout<<0;

}else if(s==1) {cout<<"1";}
else if(s==n){
    cout<<i+1;
}else{cout<<"-1";}



}
