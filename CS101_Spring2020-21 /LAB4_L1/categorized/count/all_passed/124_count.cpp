#include<simplecpp>

main_program{
    int i,number,remainder,c,queries;
    int ar[5];
    ar[0]=2;
    ar[1]=3;
    ar[2]=5;
    ar[3]=7;
    ar[4]=11;
    cin>>queries;
    repeat(queries){c=0;cin>>number;i=0;
    repeat(5){
    remainder=number%ar[i];
    switch(remainder){
    case(0): c=c+1;
    }
    i=i+1;}
    cout<<c<<endl;}
    }
