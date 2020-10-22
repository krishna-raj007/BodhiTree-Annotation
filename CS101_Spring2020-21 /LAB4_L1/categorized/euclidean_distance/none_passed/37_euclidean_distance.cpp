#include<simplecpp>

main_program{

    int q;
    cin>>q;

    for(int i=1; i<=q; i++){

    int n;
    cin>>n;
    double sum = 0.0;

    for(int j=1; j<=n; j++){
        int a,b;
        cin>>a>>b;
        sum = sum + (b-a)*(b-a);
    }

    float distance = sqrt(sum);

    printf("%.2f\n", distance);

    }

}
