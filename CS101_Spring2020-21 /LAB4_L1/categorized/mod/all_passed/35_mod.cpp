#include<simplecpp>

main_program{
long int n,m,f;
cin>>n>>m;
f=1;
for(int i=n;i>0;i--){
        f=(f*i)%m;
}
cout<<f;

}
