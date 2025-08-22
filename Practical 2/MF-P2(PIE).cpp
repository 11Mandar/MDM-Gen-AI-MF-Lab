/* Write a program to implement principle of Inclusion and Exclusion for finding 
 * student participation in Sports Club and Music Club in a university survey.*/
// Mandar Shinde (B24CE1104)


# include <iostream>
using namespace std;


int main ()
{
	int U, S, M, SnM;
	
	cout << "Enter the total no. of students: ";
	cin >> U;
	cout << "Enter no. of students in Sports Club: ";
	cin >> S;
	cout << "Enter no. of students in Music Club: ";
	cin >> M;
	cout << "Enter no. of students in both Clubs: ";
	cin >> SnM;
	
// The total number of students who are members of at least one of the clubs (SUM).
    int SUM;
    SUM = S + M - SnM;
    cout << "\nNo. of students who are members of at least one of the clubs: " << SUM << endl;


// The number of students who are only members of the Sports Club.
    int S1;
    S1 = S - SnM;
    cout << "No. of students who are only members of the Sports Club: " << S1 << endl;
    
// The number of students who are only members of the Music Club.
    int M1;
    M1 = M - SnM;
    cout << "No. of students who are only members of the Music Club: " << M1 << endl;
    
// The number of students who are members of neither of the two clubs((SUM)')
    int iSUM;
    iSUM = U - SUM;
    cout << "No. of students who are members of neither of the two clubs: " << iSUM;
    
    return 0;
}
