#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

int add();
int add(int, int);

void multiplication_table(int);

void multiplication_table(int size){
    for(int r = 0; r < size; r++){
        for(int c = 0; c < size; c++){
            cout << setw(4) << (r+1) * (c+1) << " | ";
        }

        cout << endl;
    }
}

int main() {
    const double PI = 3.1415;
    bool keep_in_loop = true;
    cout << cos(60 * PI / 180) << endl;
    do {
        cout << "Welcome to OUR SIMPLE MENU program" << endl;
        cout << "Select an option form the following:" << endl;
        cout << " a) To add two integers" << endl;
        cout << " m) To show a 12 by 12 multiplication table" << endl;
        cout << " q) To Quit" << endl;
        
        char choice;
        cin >> choice;

        int sum = 0;
        switch(choice){
            case 'A':
            case 'a':
                sum = add();
                cout << "Result: " << sum << endl;
                break;
            case 'm':
            case 'M':
                multiplication_table(8);
                break;
            case 'q':
            case 'Q':
                keep_in_loop = false;
                cout << "Goodbye\n";
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while(keep_in_loop);

    return 0;
}

int add(){
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    return add(a, b);
}

int add(int a, int b){
    return a + b;
}

void print_rectangle_using_stars(int w, int h, bool filled);



