#include<simplecpp>

main_program{
    float num1,num2,ans;

    int q;
    char addition,subtraction,multiplication,division,operations;
    cin>>q;
    cin>>num1;
    cin>>num2;


    switch(operations)

    {
        case'+' : ans=num1+num2;
                  cout<<ans;
                  break;

        case'*' : multiplication;
                  ans=num1-num2;
                  cout<<ans;
                  break;

        case'-' : subtraction;
                  ans=num1-num2;
                  cout<<ans;
                  break;

        case'/' : division;
                  ans=num1/num2;
                  cout<<ans;
                  break;

        default: cout<<"-1"<<endl;

    }

	//Write your code here

}
