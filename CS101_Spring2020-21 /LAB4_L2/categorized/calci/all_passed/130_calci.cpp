#include<simplecpp>

main_program{
 int Q, i=0, Num1, Num2;
 char op;
 cin>> Q;
 while(i<Q){
    cin>> Num1 >> op >> Num2;
    switch(op){
        case '+': cout << (Num1 + Num2) << endl; break;
        case '-': cout << (Num1 - Num2) << endl; break;
        case '*': cout << (Num1*Num2) << endl; break;
        case '/': cout << (Num1/Num2) << endl; break;
        default: cout << "-1" << endl; break;
    }

    i++;

 }

}
