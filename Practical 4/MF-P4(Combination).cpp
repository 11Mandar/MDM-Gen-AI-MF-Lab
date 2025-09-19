/* Determine the number of different teams of 3 students that can be
 formed from this group of 20.*/
// Mandar Shinde (B24CE1104)
#include <iostream>
using namespace std;
double fact(int n) {
 if (n==0 || n==1) {
return 1;
} else {
return n*fact(n-1);
}
}
double comb(int n, int r) {
 if (r>n) {
 return 0;
 }
 return fact(n)/(fact(r)*fact(n-r));
}
int main() {
 int n, r;
 cout << "Total students in debate competition: ";
 cin >> n;
 cout << "Total students in a single team: ";
 cin >> r; 
 double result = comb(n, r);
 cout << "Number of Combinations are: " << result << endl;
 return 0;
}
