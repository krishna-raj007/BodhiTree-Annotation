#include<simplecpp>

main_program{
int n, k;
cin >> n >> k;
int R_p=0%k, R_i=1%k, nextR_i;
if(((1<=n)&&(n<=pow(10,5)))&&((1<k)&&(k<=pow(10,5)))){
cout<< R_p%k <<endl;

repeat(n-1){
cout<< R_i << endl;
nextR_i = (R_i + R_p)%k;
R_p = R_i%k;
R_i = nextR_i;

}
}

}
