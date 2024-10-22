#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{

    vector<vector<float>> A = {{1.11, 2.11, 3.11}, {4.11, 5.11, 6.11}};
    vector<vector<float>> B = {{7.11, 8.11, 9.11}, {10.11, 11.11, 12.11}};
    vector<vector<float>> C = {{0, 0, 0}, {0, 0, 0}};
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}

// Ne fonctionne pas au dela de 1 milliard