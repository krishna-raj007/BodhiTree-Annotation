#include<simplecpp>
main_program{
    int n, i=0;
    double answer =0.0;
    cin >> n;
    repeat(n+1){
       answer=answer + 4*(pow(-1,i)*1.0/(2*i+1));
       i=i+1;
       }
         cout << answer;
}
