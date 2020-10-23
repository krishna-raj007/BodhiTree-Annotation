#include<simplecpp>

main_program{

    int Q ;
    float NUM1 , NUM2;
    char OPERATOR;
    cin>>Q;
    ;
    repeat(Q)
    {
  cin >>NUM1>>OPERATOR>>NUM2;
    switch (OPERATOR)
    {
    case '+': cout<< NUM1+NUM2<<endl;
             break;
    case '-': cout<< NUM1-NUM2<<endl;break;
    case '*': cout<< NUM1*NUM2<<endl;break;
    case '/': cout<< NUM1/NUM2<<endl;break;
    default: cout<<"-1"<<endl;
    }
}


    }

