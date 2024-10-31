#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
#include <string>

using namespace std;

int main(){
    double scores[]{80.5, 81, 98, 67, 77};

    for(int i = 0; i < 5; i++){
        cout << " Score " << (i + 1) << ": " << scores[i] << (scores[i] < 70 ? "*" : "") << endl;
    }

    for(double score : scores){
        cout << score << endl;
    }


    array<char, 4> html {'H', 'T', 'M', 'L'};

    for (int i = 0; i < html.size(); i++)
    {
        cout << setw(i+2) << html.at(i) << endl;
    }



    string greeting = "Hello, World!";
    int count {0};
    for(char c : greeting){
        if (c != ' ') count++;
        cout << c << "  ";
    }
    
    cout << endl << "String size: " << greeting.size() << "    " << count << endl;

    greeting.replace(7, 11, "John");

    cout << greeting << endl;
    return 0;
}