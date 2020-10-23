#include<simplecpp>

main_program{

    int n; char command; float n1, n2, s, d, m, q;
    cin >> n;
    repeat(n){
        cin >> n1;
        cin >> command;
        cin >> n2;
        switch(command){
        case '+' : s = n1 + n2; cout << s << endl;
            break;
        case '-' : d = n1 - n2; cout << d << endl;
            break;
        case '*' : m = n1 * n2; cout << m << endl;
            break;
        case '/' : q = n1 / n2; cout << q << endl;
            break;
        default: cout << "-1" << endl;
        }


        }
}
