#include<simplecpp>

main_program{
    int q, n;
    double a, b, sum, dist;

    cin >> q;

    repeat(q){
        cin >> n;
        sum = 0;
        repeat(n){
            cin >> a >> b;
            sum += (a - b) * (a - b);
        }
        dist = sqrt(sum);
        printf("%.2f\n", dist);
    }
}
