#include<simplecpp>

main_program{
float num1,num2;
int q;
char opr;
cin >> q;
repeat(q){
cin >> num1 >> opr >> num2 ;
switch(opr){
case '+' : cout << num1+num2 << endl;
break;
case '-' : cout << num1-num2 << endl;
break;
case '*' : cout << num1*num2 << endl;
break;
case '/' : cout << num1/num2 << endl;
break;
default : cout << "-1"<< endl ;
}


}


}
