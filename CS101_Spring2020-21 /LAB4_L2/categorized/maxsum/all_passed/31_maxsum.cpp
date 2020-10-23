#include<simplecpp>

main_program{

int n;
long long sum , num1= 0 , num2=0 , maxsum=0;
cin>> n;
repeat(n)
{
cin>> num1;
sum = num1 + num2;
if(sum >=maxsum)
{
maxsum = sum;
}
num2 = num1;

}

cout<< maxsum;
}
