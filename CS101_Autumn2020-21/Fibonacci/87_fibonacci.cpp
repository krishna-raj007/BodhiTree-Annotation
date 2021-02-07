#include<simplecpp>

main_program{
    int n, k, term1=0,term2=1, nextTerm;
    cin >> n >> k;
    cout << term1 << endl << term2 << endl;
    for(int i=0; i<n-2; i++){
        nextTerm = (term1 + term2)%k;
        cout << nextTerm << endl;
        term1 = term2;
        term2 = nextTerm;
    }

}
