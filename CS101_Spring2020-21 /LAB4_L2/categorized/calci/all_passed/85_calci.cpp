#include<simplecpp>

main_program{


int q;
cin>>q;
float s[q];
int i=0;
repeat(q){
float num1,num2;
char op;
cin>>num1>>op>>num2;
switch (op)
{
    case '+':{s[i]=num1+num2;break;}
    case '-':{s[i]=num1-num2;break;}
    case '*':{s[i]=num1*num2;break;}
    case '/':{s[i]=num1/num2;break;}
    default :{s[i]=-1;}
}
i++;}
int j=0;
repeat(q)
{
cout<<s[j]<<endl;
j++;
}
}
