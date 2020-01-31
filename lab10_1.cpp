// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int x;
string Ramdom(int b)
{
    
    switch (b)
    {
    case 0:
        cout << "A";
        break;
    case 1:
        cout << "B";
        break;
    case 2:
        cout << "B+";
        break;
    case 3:
        cout << "C";
        break;
    case 4:
        cout << "C+";
        break;
    case 5:
        cout << "D";
        break;
    case 6:
        cout << "D+";
        break;
    case 7:
        cout << "F";
        break;
    case 8:
        cout << "W";
        break;
        
    }
    
}
int main()
{
    string a;
    cout << "Press Enter 3 times to reveal your future."<<" ";
    getline(cin, a);
    getline(cin, a);
    getline(cin, a);
    srand(time(0));
    x = rand() % 9;
    cout << "You will get"<<" ";
    Ramdom(x);
    cout<<" " << "in this 261102.";
    return 0;
}

