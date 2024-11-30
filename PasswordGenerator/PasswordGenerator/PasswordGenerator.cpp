#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;


string Parola(int length) {
    if (length <= 0) {
        return "Lungimea trebuie sa fie mai mare decat 0!";
    }

    string password = "";
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charSize = characters.size();

    srand(time(0));

    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % charSize;
        password += characters[randomIndex];
    }

    return password;
}

int main() {
    int length;
    cout << "Introdu lungimea parolei: ";
    cin >> length;

    string password = Parola(length);
    cout << "Parola generata: " << password << endl;

    return 0;
}
