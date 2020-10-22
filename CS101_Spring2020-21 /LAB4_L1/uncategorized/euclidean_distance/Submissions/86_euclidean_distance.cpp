#include <simplecpp>

main_program{
    int q,r;
    float a,b,s;
    cin >> q;

    repeat(q){
        s=0;
        cin >> r;
        repeat(r){
            cin >> a >> b;
            s=s+ pow(abs(b-a),2);
        }
        printf ("%.2f\n",sqrt(s));
    }
}
