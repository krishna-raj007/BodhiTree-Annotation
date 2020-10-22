#include<simplecpp>

main_program{
    int n, mx = 0, i = 0;
    cin >> n;
    while(n > 0){
        if(n > mx){
            mx = n;
        }
        i++;
        cin >> n;
    }
    cout << mx;
}
