#include <iostream>
using namespace std;
bool EvenandOddNumber(int n)
{cout<< "start" << endl;

        if(n % 2 == 0){
       cout << "value inside if " << endl;
       return true;
        }
       else {
        return false;
       }
            return true; 
}

int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    bool r= EvenandOddNumber(n);
    cout <<" even and odd number = "<< r; 
}