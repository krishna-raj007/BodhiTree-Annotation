#include<simplecpp>

main_program{
long long int n,k;
cin>>n>>k;
int a=0;
int b=1;

int c;
for(int i=1;i<=n;i++){
if(i==1){
cout<<a<<endl;


}
else if(i==2){
cout<<b%k<<endl;


}
else{
c=(a%k+b%k)%k;
cout<<c<<endl;
a=b;
b=c;



}


}

}
