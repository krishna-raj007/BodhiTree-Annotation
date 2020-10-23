#include<simplecpp>
main_program{
    float Q,num1,num2;
    int i=1;
    char op;
    cin>>Q;
    for (;i <= Q; i++){
    cin>>num1>>op>>num2;
        switch (op){
            case '+' : cout<< (num1+num2) <<endl;
                                 break;
            case '-' : cout<< (num1-num2) <<endl;
                                 break;
            case '*' : cout<< (num1*num2) <<endl;
                                 break;
            case '/' : cout<< (num1/num2) <<endl;
                                 break;
            default: cout<< -1 <<endl;
        }
    }

}
