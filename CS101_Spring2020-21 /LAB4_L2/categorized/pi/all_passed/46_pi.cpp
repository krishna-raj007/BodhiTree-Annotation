#include<simplecpp>

main_program{

    int n, i=1; cin >> n;
    float answer=4;
    repeat (n) {
        answer += 4*pow(-1,i)*(1.0/((2*i+1)*1.0));
        i++;
    }
    cout << answer << endl;

}
