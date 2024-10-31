#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int r = 0;
    while(r < 12){
        int c = 0;
        while(c < 12){
            cout << setw(4) << (r+1) * (c+1);

            c++;
        }
        cout << endl;
        r++;
    }


    for(int r = 0; r < 12; r++){
        for(int c = 0; c < 12; c++){
            cout << setw(4) << (r+1) * (c+1) << " | ";
        }

        cout << endl;
    }

    return 0;
}