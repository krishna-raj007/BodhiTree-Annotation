#include<simplecpp>;
main_program{
int n,i {1};
double ans {1};
cin>>n;
repeat(n){
if( i%2==0){

ans+=1/((2*i)+1);
}
else{
ans-=1/((2*i)+1);
}
i+1;
}
ans*=4;
cout<<ans;
}
















