#include<simplecpp>
main_program
{
    int n;
    char ch;
    cin>>n;
    float num1,num2;
    repeat(n)
        {
            cin>>num1>>ch>>num2;

           if(ch=='+')
           {
               cout<<num1+num2<<"\n";
           }
           else if(ch=='-')
           {
               cout<<num1-num2<<"\n";
           }
           else if(ch=='*')
           {
               cout<<num1*num2<<"\n";
           }
           else if(ch=='/')
           {
               cout<<num1/num2<<"\n";
           }
           else
           {
               cout<<"-1"<<"\n";
           }
        }
}
