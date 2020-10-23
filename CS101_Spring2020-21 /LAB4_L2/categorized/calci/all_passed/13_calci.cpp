#include<simplecpp>

main_program{

    int q;
    cin>>q;
    repeat(q)
    {
        float Num1, Num2;
        char Op;
        cin>>Num1>>Op>>Num2;
        float answer;
        switch(Op)
        {
            case '+':
                answer = Num1 + Num2;
                break;
            case '-':
                answer = Num1 - Num2;
                break;
            case '*':
                answer = Num1 * Num2;
                break;
            case '/':
                answer = Num1 / Num2;
                break;
            default :
                answer = -1;
                break;
        }
        cout<<answer<<endl;
    }

}
