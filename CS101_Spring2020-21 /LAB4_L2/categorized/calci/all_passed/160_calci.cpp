#include<simplecpp>

main_program{

    float Num1,Num2;
    int Q;
    char op;

    cin>>Q;

    repeat(Q){

    cin>>Num1>>op>> Num2;
    switch(op){

        case'+':cout<< Num1+Num2<<endl; break;
        case'-':cout<< Num1-Num2<<endl; break;
        case'*':cout<< Num1*Num2<<endl; break;
        case'/':cout<< Num1/Num2<<endl; break;

        default : cout<<"-1"<< endl; break;


    }

    }

}

