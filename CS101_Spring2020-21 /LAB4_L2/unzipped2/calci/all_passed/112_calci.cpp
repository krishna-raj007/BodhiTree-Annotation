#include<simplecpp>
#include<math.h>
main_program
{
    int q;
    cin>>q;
    float a[q];
    for(int i=0;i<q;i++)
    {
        float num1,num2;
        char op;
        cin>>num1>>op>>num2;
        if(op=='+'||op=='-'||op=='*'||op=='/')
        {
            switch(op)
            {
                case '+':{
                            a[i]=num1+num2;
                            break;
                        }
                case '-':{
                            a[i]=num1-num2;
                            break;
                        }
                case '*':{
                            a[i]=num1*num2;
                            break;
                        }
                case '/':{
                            a[i]=num1/num2;
                            break;
                        }
            }
        }
        else
        {
            a[i]=-1;
        }
    }
    for(int i=0;i<q;i++)
    {
        cout<<a[i]<<endl;
    }
}
