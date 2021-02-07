#include<simplecpp>

main_program{
long int n,k,f1=0,f2=1,f3;
cin >>n>>k;
repeat(n){
    cout<<f1<<endl;
    f3=f1;
    f1=f2;
    f2=(f3+f1)%k;
}
}
