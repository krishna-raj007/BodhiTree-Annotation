#include<simplecpp>

main_program{

	int n; int a, b; float s1, s2;
	cin >> n >> a >> b;
	s1 = a + b;

	repeat(n-2){
        int c ;
        cin >> c;
        s2 = b + c;
        if (s2 > s1)
        s1 = s2;
        b = c;
        }

    cout << s1 << endl;

}
