/* Write a program to implement permutations for a competition with
   12 participants. Calculate the number of ways to arrange the top 5
   participants*/
// Mandar Shinde (B24CE1104)


#include<iostream>
using namespace std;


int fact(int a) {
    if (a==0 || a==1)
        return 1;
    else
        return a*fact(a-1);
}
int main() {
	int n, r;


	cout << "Enter total number of participants: ";
	cin >> n;
	cout << "Enter the number of participants getting prize: ";
	cin >> r;
	
	cout << "The permutations will be: ";
	long long npr = fact(n)/fact(n-r);
	cout << npr;
	
    return 0;
}
