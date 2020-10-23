#include<simplecpp>

main_program{

double term, answer=0;
int a,b,n,i=1,ans=-1;
cin>>n;
repeat(n+1){
    ans=(-1)*ans;
    term=ans*1.0/i;
    answer=answer+term;
    i=i+2;
}
answer=4*answer;
cout<<answer<<endl;

}
