#include<simplecpp>

main_program{

    int query;
    cin>>query;

    for(int i = 1;i<=query;i++){
        int dimension;
        float dist = 0, distance;
        cin>>dimension;

        for(int j = 1; j<=dimension;j++){
                float a, b;
                cin>>a>>b;
                dist=dist+((a-b)*(a-b));
        }

        distance= sqrt(dist);
        printf("%.2f\n",distance);
    }

}
