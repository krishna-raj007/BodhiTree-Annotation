#include<simplecpp>

main_program{
int n;
cin>>n;
char operato;
float num1,num2;
cin>>num1>>operato>>num2;
if(operato == '+')
cout<<num1 + num2<<endl;
else if(operato == '-')
cout<<num1 - num2<<endl;
else if(operato == '*')
cout<<num1 * num2<<endl;
else if(operato == '/')
cout<<num1 / num2<<endl;
else
cout<<"it's not from the set";
}
