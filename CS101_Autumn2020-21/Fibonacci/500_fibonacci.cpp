
/* AUTHOR - gaurav shirsath */

#include<simplecpp>

main_program{
long int T1,T2,T3,K,N;
cin>>N>>K;
T1=0;
T2=1;
cout<<T1%K<<endl<<T2%K<<endl;
while(N>2){
T3=T1%K+T2%K;
T1=T2;
T2=T3;
cout<<T3%K<<endl;
N--;

}

}
