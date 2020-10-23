#include<simplecpp>

main_program {
    int q;
    float a, b;
    char ch;
    cin >> q;

    repeat(q) {
        cin >> a >> ch >> b;

        switch(ch) {
            case '+':
                cout << a + b << endl;
                break;
            case '-':
                cout << a - b << endl;
                break;
            case '*':
                cout << a * b << endl;
                break;
            case '/':
                cout << a / b << endl;
                break;
            default:
                cout << -1 << endl;
                break;
        }
    }
}
