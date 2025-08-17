// Write a program to implement set operations to manage membership in school clubs.
// Mandar Shinde (B24CE1104)


# include <iostream>
using namespace std;


int main ()
{
	int n;
	cout << "Enter the total no. of students: ";
	cin >> n;
	cout << "\n";
	string stud[n];
	cout << "Write names of all Students(Universal Set): \n";
	for (int i=0; i<n; i++) {
		cout << "Enter the name of Student " << i+1 << ": ";
		cin >> stud[i];
	}
	cout << "\n\n";
	int n1;
	cout << "Enter the total no. of students in Drama Club: ";
	cin >> n1;
	cout << "\n";
	string a[n1];
	cout << "Write names of students in Drama Club: \n";
	for (int i=0; i<n1; i++) {
		cout << "Enter the name of Student " << i+1 << ": ";
		cin >> a[i];
		}
		cout << "\n\n";
		int n2;
		cout << "Enter the total no. of students in Science Club: ";
		cin >> n2;
		cout << "\n";
		string b[n2];
		cout << "Write names of students in Science Club: \n";
		for (int i=0; i<n2; i++) {
			cout << "Enter the name of Student " << i+1 << ": ";
			cin >> b[i];
		}
		cout << "\n\n";
		cout << "The Universal set(U) is: { ";
		for (int i=0; i<n; i++) {
			cout << stud[i] << " ";
			}
		cout << "}\n";
		cout << "The set of students in Drama Club(Set A) is: { ";
		for (int i=0; i<n1; i++) {
			cout << a[i] << " ";
		}
		cout << "}\n";
		cout << "The set of students in Science Club(Set B) is: { ";
		for (int i=0; i<n2; i++) {
			cout << b[i] << " ";
		}
		cout << "}\n";
		// Students in both the clubs (Intersection)
		cout << "Students in both clubs(A n B): { ";
		for (int i=0; i<n1; i++) {
			for (int j=0; j<n2; j++) {
				if (a[i] == b[j])
				cout << a[i] << " ";
			}
		}
		cout << "}\n";
		// Students in at least one club (Union)
		cout << "Students in at least one club(AUB): { ";
		// Print all drama club students
		for (int i=0; i<n1; i++) {
			cout << a[i] << " ";
		}
		// Print science club students not in drama club
		for (int i=0; i<n2; i++) {
			int j;
			for (j=0; j<n1; j++) {
				if (b[i] == a[j]) {
					break;  // found in drama club
				}
			}
			if (j == n1) {  // not found in drama club
				cout << b[i] << " ";
			}
		}
		cout << "}\n";
	    // Students in Drama Club but not in Science Club
	    cout << "Students in Drama Club only(A-B): { ";
	    for (int i=0; i<n1; i++) {
			int j;
			for (j=0; j<n2; j++) {
				if (a[i] == b[j]) {
					break;  // found in science club
				}
			}
			if (j == n2) {  // not found in science club
				cout << a[i] << " ";
			}
		}
		cout << "}\n";
		// Students in Science Club but not in Drama Club
		cout << "Students in Science Club only(B-A): { ";
		for (int i=0; i<n2; i++) {
			int j;
			for (j=0; j<n1; j++) {
				if (b[i] == a[j]) {
                break;  // found in drama club
                }
            }
            if (j == n1) {  // not found in drama club
				cout << b[i] << " ";
			}
		}
		cout << "}\n";
		// Students not in any club
		cout << "Students in no club((AUB)'): { ";
		for (int i=0; i<n; i++) {
			int j;
			int k;
			for (j=0; j<n1; j++) {
				if (stud[i] == a[j]) {
					break;
				}
			}
			if (j == n1) {
				for (k=0; k<n2; k++) {
					if (stud[i] == b[k]) {
						break;
				    }
				}
				if (k == n2) {  // not found in either club
					cout << stud[i] << " ";
				}
			}
		}
		cout << "}\n";
		
		return 0;
}

