#include<simplecpp>

main_program{
int n,p,t,answer;
cin>>n;
t=0;
repeat(n){
     cin>>p;
     answer=max(answer,p+t);
     t=p;
     }
cout<<answer<<endl;
}
