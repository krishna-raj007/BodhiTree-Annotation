#include<simplecpp>

main_program{
float str[400];
int num1;
cin>>num1;
int spc[num1];
float res[num1];
int ro=0;
int done=0;
for(int i=0;i<num1;i++){
    cin>>spc[i];
    for(int j=ro;j<(done+spc[i]*2);j++){
        cin>>str[j];
    }
    ro=spc[i]*2;
    done+=ro;
}
done=0;
ro=0;
for(int i=0;i<num1;i++){
    for(int j=ro;j<(done+spc[i]*2);j+=2){
        res[i]+=pow(str[j]-str[j+1],2);
        //k+=2;
    }
    res[i]=sqrt(res[i]);
    ro=spc[i]*2;
    done+=ro;
}
for(int i=0;i<num1;i++){
   printf("%.2f\n", res[i]);
}
}
