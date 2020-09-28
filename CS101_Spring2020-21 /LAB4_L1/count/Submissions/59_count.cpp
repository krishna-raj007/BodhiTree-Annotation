#include<simplecpp>

main_program{
int i=0,n,A;
cin >> n;
repeat(n){
    i=0;
    cin >> A;
int remainder2 = A%2;

switch (remainder2){
case 0: i++;
default : i;}

int remainder3 = A%3;
switch (remainder3){
case 0: i++;
default : i;}

int remainder5 = A%5;
switch (remainder5){
case 0: i++;
default : i;}

int remainder7 = A%7;
switch (remainder7){
case 0: i++;
default : i;}

int remainder11 = A%11;
switch (remainder11){
case 0: i++;
default : i;}
cout << i << endl;
}
}
