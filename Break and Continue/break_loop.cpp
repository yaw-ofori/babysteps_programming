#include <iostream>

using namespace std;
int find_char (char* str, char type);
int menu () {
    int choice;
    cout << ">> Please select your choice of dish: " << endl;
    cout << "1. Fufu and light soup. " << endl;
    cout << "2. Banku and light soup. " << endl;
    cout << "3. Rice balls and light soup. " << endl;
    cout << "4. Yam and light soup. " << endl;
    cout << "5. Cancel service. " << endl;
    cin >> choice;

    return choice;
}
int main () {

    // int j;
    // j = find_char ("kenneth", 't');
    // cout << j << endl;

    do {
        int choice;
        choice = menu();
        if (choice == 5 ) { break; }
    } while(1)
    return 0;
}

int find_char (char* str, char type) {
    int i = 0;
    while(*(str)){
        i++; 
        if (type == *(str)) break;
        str++;
    }
    return i;
}



void waiter (int choice) {
    switch (choice) {
    case 1:
        cout << "serve Fufu and light soup. " << endl;
    break;
    case 2:
        cout << "serve Banku and light soup. " << endl;
    break;
    case 3:
        cout << "serve Rice balls and light soup. " << endl;
    break;
    case 4:
        cout << "serve Yam and light soup. " << endl;
    break;

    default:
        cout << "Order not available. " << endl;
    }
}