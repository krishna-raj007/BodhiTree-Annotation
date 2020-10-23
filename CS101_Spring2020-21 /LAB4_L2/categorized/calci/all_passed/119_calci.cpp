#include<simplecpp>

main_program{

int Q ;
char Operator ;
float num1, num2 ;

cin >> Q ;

    repeat(Q){

    cin >> num1 >> Operator >> num2 ;
        switch(Operator){

            case '+': cout << ( num1 + num2) << endl;
                break ;
            case '-': cout << ( num1 - num2) << endl;
                break ;
            case '/': cout << ( num1 / num2) << endl;
                break ;
            case '*': cout << ( num1 * num2) << endl;
                break ;
            default : cout << "-1" << endl ;

        }

    }

}
