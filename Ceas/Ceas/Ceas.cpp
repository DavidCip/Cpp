#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
    int h, m, s;

    while (true)
    {
        cout << "Introduceti ora (0-23): ";
        cin >> h;
        cout << "Introduceti minutul (0-59): ";
        cin >> m;
        cout << "Introduceti secunda (0-59): ";
        cin >> s;

        if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60)
        {
            break; 
        }
        else
        {
            cout << "Timp invalid. Reintroduceti valorile corecte.\n";
            system("cls"); 
        }
    }

    while (true)
    {
        system("cls"); 
        cout << (h < 10 ? "0" : "") << h << ":"
            << (m < 10 ? "0" : "") << m << ":"
            << (s < 10 ? "0" : "") << s << endl; 
        Sleep(1000); 
        s++;

        if (s > 59)
        {
            s = 0;
            m++;
        }
        if (m > 59)
        {
            m = 0;
            h++;
        }
        if (h > 23) 
        {
            h = 0;
        }
    }

    return 0;
}
