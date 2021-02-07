#include<simplecpp>

main_program{
//fibonacci

int m,n,i;
cin >> m >> n ;
int f1=0, f2=1 ,f3;

for(i=0; i<m; i++){
cout << f1%n << endl;
f3 = f1 + f2;
f1 = f2;
f2 = f3;
}

}
