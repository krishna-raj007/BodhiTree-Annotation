#include<simplecpp>

main_program{

    int q;
    float num1, num2, ans;
    char op;

    cin>>q;

    repeat(q){

        cin>>num1>>op>>num2;

        switch(op){

        case '+':
            ans=num1+num2;
            break;
        case '-':
            ans=num1-num2;
            break;
        case '*':
            ans=num1*num2;
            break;
        case '/':
            ans=num1/num2;
            break;
        default:
            ans=-1;
        }

    cout<<ans<<endl;
    }

}
