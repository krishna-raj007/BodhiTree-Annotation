#include<simplecpp>
main_program{
int n,a{1};
double answer{1};
cin>> n;
repeat(n){
if(a % 2 ==0){
    answer += 1.0/((2*a)+1);
}
else{
    answer -= 1.0/((2*a)+1);
}
a++;
}
answer *= 4;
cout<< answer;
}
