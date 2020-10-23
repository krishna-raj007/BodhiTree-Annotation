#include<simplecpp>

main_program{
long int n,I;
float answer, T,S;
cin>>n;
T=1,S=1,I=1;
repeat(n){
T= ((I)*1.0/(2*I+1));
if (I%2==0)
    S=S-T;
else
    S=S+T;
I=I+1;
}
answer=4*S;
cout<<answer<<endl;








}

