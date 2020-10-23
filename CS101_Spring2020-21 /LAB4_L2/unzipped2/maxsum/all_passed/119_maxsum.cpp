#include<simplecpp>

main_program{

int n ;
unsigned long long int a, b, c, d ;
unsigned long long int term1, term2, term3, maximum, bigger ;

    cin >> n;

    cin >> a >> b >> c ;

        term1 = a + b ;
        term2 = b + c ;
        maximum = max(term1,term2) ;

            repeat (n-3){

                cin >> d ;

                term3 = c + d ;
                bigger = max(maximum,term3) ;
                maximum = bigger ;
                c = d ;

            }



    cout << maximum ;
}
