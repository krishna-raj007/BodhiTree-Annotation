#include<simplecpp>

main_program{
//Write your code here
unsigned long int n,k,F0=0,F1=1,d;
cin>>n>>k;
repeat(n){
    cout<<F0%k<<endl;
    d=F1%k;
    F1+=F0%k;
    F0=d;
}




}
