#include<simplecpp>

main_program{
//Write your code here

long int n,k;
cin>>n>>k;

long int i=0,j=1,next,p=2;

cout<<i%k<<"\n"<<j%k<<"\n";


while(p<n){
    next=i+j;
    cout<<next%k<<"\n";
    i=j;
    j=next;
    p++;
    }

}
