#include<simplecpp>

main_program{

    int query;
    cin>>query;
    for(int i = 1; i<=query;i++){
        int num, div2, div3, div5, div7, div11, div=0;
        cin>>num;
        div2 = num%2;
        div3 = num%3;
        div5 = num%5;
        div7 = num%7;
        div11 = num%11;
        //cout<<div2<<endl<<div3<<endl<<div5<<endl<<div7<<endl<<div11<<endl;

        if(div2==0)
            div++;
        if(div3==0)
            div++;
        if(div5==0)
            div++;
        if(div7==0)
            div++;
        if(div11==0)
            div++;

            cout<<div<<endl;

    }

}
