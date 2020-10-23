#include<simplecpp>
main_program{
long long int n;
int flag =0;
cin >> n;
for(long long int i = 0;i<= 1*(10^19);i++){
        long long int p,q;
p=0;
q=1;
repeat(i){
p=p+q;
q=p+q;
}
if(n == p){cout << 2*i;
flag=1;
break;}
 else if (n == q){cout << 2*i +1;
 flag =1;
break;}

}
if(flag ==0){cout << -1;}

}



