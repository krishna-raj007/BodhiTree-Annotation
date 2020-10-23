#include<simplecpp>

main_program{

 long long int n ;
 cin >> n ;
 double sum=0 ,i=0;

 repeat(n+1){
 sum=sum + pow(-1,i)*(1.0/(2*i+1));
 i=i+1;
 }

 cout << 4*sum ;

}
