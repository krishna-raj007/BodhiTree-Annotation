#include<simplecpp>

main_program{
        long int n, m;
        int k=1, l=1;
        cin>> n >> m;
        while(k<=n){
            l=l*k;

            k=k+1;
            l=l%m;
        }
        cout<< l;
}
