#include<simplecpp>

main_program{
    int n,a=0,b,sum,value, oldsum=0 ;
    cin>> n;
    repeat(n){
        cin>> b;
        sum = a + b;
        value = max (sum, oldsum) ;
        oldsum= value; // stores current largest sum of consecutive terms
        a= sum - a ; // a stores current value of b.
    }
    cout<< value << endl;

}
