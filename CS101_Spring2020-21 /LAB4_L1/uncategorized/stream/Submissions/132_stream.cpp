#include<simplecpp>

main_program{

    int a,b,max_num;
    cin>>a>>b;
    max_num=max(a,b);

    for( ; ; ){
        int c;
        cin>>c;
        max_num = max(max_num,c);
        if(c == -1)
            break;
    }

    cout<<max_num;

}
