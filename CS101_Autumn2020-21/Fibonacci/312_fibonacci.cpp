#include <simplecpp>

main_program{
         long int a = 0, b = 1, n, k,c;
        cin>>n>>k;
        cout<<a<<endl;
        cout<<b<<endl;
        for(long int i = 0; i<(n-3); i++){
            c = (a +b)%k;
            a = b;
            b = c;
            cout<<b<<endl;
        }


        c = a +b;


        cout<<(c%k);

}