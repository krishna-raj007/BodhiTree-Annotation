#include<iostream>
using namespace std;

int main(){
int a{1},b{0},c{0},n,k;
cin>>n>>k;
if(n>=2)
cout<<b<<endl<<a<<endl;
else
cout<<a<<endl;
n-=2;
if(n>2){
for(int i=0;i<n;i++){
c=(a%k+b%k)%k;
cout<<c<<endl;
b=a;
a=c;
}
}
}
