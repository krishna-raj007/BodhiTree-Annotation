#include<simplecpp>

main_program{

long int n, i, k, t1, t2, temp;
cin >> n >> k;

t1 = 0;
t2 = 1;


for (i = 0; i < n; i++){
    cout << (t1%k)<< endl;
    temp = t2;
    t2 = t2 + t1;
    t1 = temp;

    }




}
