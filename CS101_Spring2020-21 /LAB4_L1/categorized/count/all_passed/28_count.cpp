#include<simplecpp>

main_program{
int query;
cin>>query;
int res[query];
int inp, inp_mod,m=2,i=0;
for(int b=0;b<query;b++){
    cin>>inp;
for(int j=1;j<=5;j++){

    inp_mod=inp%m;
    switch(inp_mod){
        case 0 : i++;

    }
    switch(m){
    case 2 : m=3;
            break;
    case 3 : m=5;
            break;
    case 5 : m=7;
            break;
    case 7 : m=11;
            break;
    case 11 : m=2;
            break;
            }
    if(j==query){
        res[b]=i;
        i=0;
    }

}
}
for(int a=0;a<query;a++){
    cout<<res[a]<<endl;
}
}
