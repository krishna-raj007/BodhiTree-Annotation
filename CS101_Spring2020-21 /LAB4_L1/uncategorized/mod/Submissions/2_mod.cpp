#include<simplecpp>

main_program{

 long int m, n, a, b;
 cin>>n>>m;
 long int k=1;
 long int l=1;

 repeat(n){
 l=l*k;
 k=k+1;
 }
 b=l%m;
 cout<<"answer"<<b<<endl;


}
