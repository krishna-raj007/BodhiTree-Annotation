#include<simplecpp>
main_program{
int n,i=1;
double term,answer,value;
cin>>n;
value=1.0;term =0;
repeat(n){
term =(pow(-1,i)*(1.0)/(2*i+1));
    value=value+term;
       i=i+1;
       }
       answer=4*value;
       cout<<answer<<endl;

}
