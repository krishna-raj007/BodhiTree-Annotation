#include<simplecpp>

main_program{
int n;
cin>>n;
float answer{0};

 for(int i=0; i<=n; i++)
 {
    answer = answer + pow(-1,i)/(2*i+1);

 }
 answer=4*answer;
 cout<<answer<<endl;
 }
