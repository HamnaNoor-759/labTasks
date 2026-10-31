#include <iostream>
using namespace std;
int main()
{
    float sum;
    float T1;
    float T2;
    float T3;
    float T4;
    float T5;
    float average;

    cout << "T1, T2, T3, T4, T5:";
    cin >> T1 >> T2 >> T3 >> T4 >> T5;
    sum = T1 + T2 + T3 + T4 + T5;
    average = sum/5;

    cout << "sum: " << sum << endl;
    cout << "average: " << average << endl;
    return 0;
}