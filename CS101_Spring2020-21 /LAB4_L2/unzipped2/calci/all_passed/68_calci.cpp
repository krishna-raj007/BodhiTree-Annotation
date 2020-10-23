#include<simplecpp>
main_program{

    int q;
    float num1,num2,s;
    cin>>q;
    char opert;
    repeat(q)
    {
        cin>>num1>>opert>>num2;
        switch(opert){
        case '+' :s=num1+num2;
        cout<<s<<endl;
        break;
        case '-' :s=num1-num2;
        cout<<s<<endl;
        break;
        case '*' :s=num1*num2;
        cout<<s<<endl;
        break;
        case '/' :s=num1/num2;
        cout<<s<<endl;
        break;
        default: cout<<"-1"<<endl;
        }
    }
}
