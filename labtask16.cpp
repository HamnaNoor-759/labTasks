/*#include <iostream>
#include <array>
using namespace std;

int main()
{
array<int, 5> scores ={90, 75, 85, 60, 40};
int count = 0;
int score;
for (int score : scores)
{
    if(score <= 40)
    {
    }
    count++;
}

cout << "array size: " << scores.size() << endl;
cout << "count of passing grades: " << count << endl;
return 0;
}*/


 /*#include <iostream>
#include <array>
using namespace std;

int main()
{
array<int, 5>temperatures ={32, 28, 35,29, 31};
int maxtemperature = 28;

for(int temp : temperatures)
{
    if(temp > maxtemperature)
    {        
        maxtemperature = temp;
    }
}

cout << "array size: " << temperatures.size() << endl;
cout << "maximum temperature: " << maxtemperature  << endl;
return 0;
} */


 /*#include <iostream>
using namespace std;
int main()
{
    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        for  (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;   
    }
    
    return 0;
}*/



 /*#include <iostream>
using namespace std;
int main()
{
    int rows = 5;
    for(int i = rows; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
        cout << "* ";
        }
        cout << endl;
    }
    return 0;
}*/


 /*#include <iostream>
using namespace std;
int main()
{
    int rows = 5;
    for(int i = 1; i <= rows; i++)
    {
        for (int space =1; space <= rows -i; space++)
        {
            cout << " ";
        }
        for(int stars = 1; stars <= (2*i-1); stars++)
        {
        cout << "* ";
        }
        cout << endl;
    }
    return 0;
}*/


 /*#include <iostream>
using namespace std;
int main()
{
    int rows = 5;
    for(int i = rows; i >= 1; i--)
    {
        for(int space = 0; space < rows - i; space++)
        {
        cout << " ";
        }
        for(int star = 1; star <= (2*i-1); star++)
        {
        cout << "* ";
        }
        cout << endl;
    }
    return 0;
}*/

/*#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0)
    {
        // Fix 3: Updated message to match the task
        cout << "equation is linear and has only one root" << endl;
    }
    else 
    {
        double d = b*b - 4*a*c;
        if (d < 0)
        {
            cout << "roots are imaginary" << endl;
        } // Fix 1: Closed the 'if' block here before starting 'else'
        else 
        {
            // Fix 2: Added brackets around (2*a)
            double root1 = (-b + sqrt(d)) / (2*a);
            double root2 = (-b - sqrt(d)) / (2*a);
            cout << "root1: " << root1 << " root2: " << root2 << endl;
        } 
    }
    return 0;
}*/


/*#include <iostream>
#include <cstdlib>
#include <ctime>
using nasmespace std;
int main()
{
srand(time(0));
int secret =  (rand () % 10 )+ 1 ;
int guess;
cin >> guess;
cout << "attempt 1" ;

if (secret == guess)
{
cout << "winner " << endl;
}
else 
{
    cout << "attempt 2" ;
    cin >> guess;

    if (secret == guess)
    {
        cout << "winner " << endl;
    }
    else 
    {
        cout << "attempt 3" ;
        cin >> guess;

        if (secret == guess)
        {
            cout << "winner " << endl;
        }
        else 
        {
            cout << "loser , generated number was " << secret << endl;
        }
    }
}
return 0;
}*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int result = ((rand() % 3) + 1);
    int numbers ;
    cin >> numbers;
    cout << " numbers in ascending order: ";
    if (numbers == 1)
    {
        cout << "orignal one" ;
    }
     else
     {
        if(numbers == 2)
        {
            cout << "orignal one";
        }
        else
        {
            if (numbers == 3)
            {
                cout << " orignal one";
            }
        } 
        
     }
     return 0;
}

