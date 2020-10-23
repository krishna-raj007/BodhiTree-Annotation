#include<simplecpp>
main_program{

int n ;
cin>> n ;

int arr[n];
cout<< "enter n numbers : " ;


repeat(n/2){
int i=0;
if (arr[i]>=arr[i+1]) cout<< arr[i] << endl;
else cout<< arr[i+1] << endl;
i=i+2 ;
}
}
