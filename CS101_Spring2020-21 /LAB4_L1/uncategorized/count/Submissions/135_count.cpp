#include<simplecpp>

main_program{
             int Q,n,A;
             cin>>Q;
             repeat(Q){
                        A=0;
                        cin>>n;
                        if (n%2==0) A=A+1;

                        if (n%3==0) A=A+1;

                        if (n%5==0) A=A+1;

                        if (n%7==0) A=A+1;

                        if (n%11==0) A=A+1;

                        cout<<A<<endl;
                       }


}
