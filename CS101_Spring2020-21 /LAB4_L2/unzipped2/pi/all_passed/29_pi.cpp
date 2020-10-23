#include<simplecpp>

main_program{
int n,i{1};
double answer{1};
cin>>n;
repeat(n){
     if (i % 2 == 0){
        answer += 1.0/((2*i)+1);
        }
        else{
             answer -= 1.0/((2*i)+1);
             }
             i++;
             }
             answer *= 4;
             cout<<answer;

             }





