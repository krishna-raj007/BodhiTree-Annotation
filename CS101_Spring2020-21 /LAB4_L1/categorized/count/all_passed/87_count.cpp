#include <simplecpp>

main_program{
    int q , n ,k;
    cin >> q;

    repeat(q){
        k=0;
        cin >> n;
        if(n%2==0){
            k++;
        }

        if(n%3==0){
            k++;
        }

        if(n%5==0){
                    k++;
        }
        if(n%7==0){
            k++;
        }
        if(n%11==0){
            k++;
        }
        cout << k << endl;
    }
}
