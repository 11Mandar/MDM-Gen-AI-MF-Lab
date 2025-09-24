// Mandar Shinde (B24CE1104)
#include <iostream>
using namespace std;


const int INF = 99999;
int main() {
    int n;
    cout << "Enter number of intersections: ";
    cin >> n;
    int dist[n][n];
    cout << "\nEnter cost between intersections (use 99999 if no direct path):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                dist[i][j] = 0;
            } else {
                cout << "Enter value for path (" << i << " -> " << j << "): ";
                cin >> dist[i][j];
            }
        }
    }
    // Floyd–Warshall Algorithm
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    cout << "\nShortest cost between intersections:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF)
                cout << "INF\t";
            else
                cout << dist[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
