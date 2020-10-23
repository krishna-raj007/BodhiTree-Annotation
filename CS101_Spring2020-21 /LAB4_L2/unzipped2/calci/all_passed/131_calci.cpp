#include<simplecpp>

main_program
{
    int (n); cin >> n ;
    float a, b ; char op ;

    repeat(n) { cin >> a >> op >> b ;
                switch (op)
                {
                    case '*' : cout << a*b << endl ; break ;
                    case '+' : cout << a+b << endl ; break ;
                    case '-' : cout << a-b << endl ; break ;
                    case '/' : cout << a/b << endl ; break ;
                    default : cout << "-1"<< endl ;
                }
              }
}
