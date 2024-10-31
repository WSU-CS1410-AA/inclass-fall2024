// // FILE: ex09-cpp_string.cpp
// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <vector>
// #include <random>
// using namespace std;

// struct Date {
//   int day, month, year;
// };

// struct Event {
//   Date from;
//   Date to;
//   string name;
// };

// void printEvent(const Event& e){
//   cout << " * " << e.name << ": "
//        << e.from.month << "/" << e.from.day << "/" << e.from.year 
//        << " - "
//        << e.to.month << "/" << e.to.day << "/" << e.to.year
//        << endl;
// }

// void printEventsArray(Event events[], int size){
//   for(int i = 0; i < size; i++) {
//     printEvent(events[i]);
//   }
// }

// void printEventsVector(const vector<Event>& events){
//   for(Event e : events){
//     printEvent(e);
//   }


// int main() {

//   Event eventsArr[2] {
//     { {15, 1, 2024}, {28, 2, 204}, "Festival"}
//   };

//   eventsArr[1].from = Date{15, 1, 2024};
//   eventsArr[1].to = Date{15, 1, 2024};
//   eventsArr[1].name = "MLK Day";

//   vector<Event> eventsVector{
//     { {15, 1, 2024}, {28, 2, 204}, "Festival"}
//   };

//   eventsVector.push_back(Event{
//     Date{15, 1, 2024}, 
//     Date{15, 1, 2024},
//     "MLK"
//   });

//   cout << "Events (array)" << endl;
//   cout << "===================================" << endl;
//   printEventsArray(eventsArr, 2);

//   cout << "\nEvents (vector)" << endl;
//   cout << "===================================" << endl;
//   printEventsVector(eventsVector);


//   default_random_engine en;
//   normal_distribution<> n{0.0, 1.0};

//   for(int i = 0; i < 100; i++){
//     cout << n(en);
//   }

//   cout << endl << endl;

//   uniform_int_distribution<> u{11, 20};

//   for(int i = 0; i < 100; i++){
//     cout << u(en) << ',';
//   }


//   // string s1("Quick! Send for Count Nero.");
//   // string s2("Lord");
//   // string s3("Don't ");

//   // s1.erase(0, 7);             // Remove "Quick! "
//   // s1.replace(9, 5, s2);       // Replace "Count" with "Lord"
//   // s1.replace(0, 1, "s");      // Replace "S" with "s"
//   // s1.insert(0, s3);           // Insert "Don't " at the beginning
//   // s1.erase(s1.size() - 1, 1); // Remove the last period
//   // s1.append(3, '!');          // Add three exclamation marks

//   // int x = s1.find(' ');
//   // while(x < s1.size()) {
//   //    s1.replace(x, 1, "/");    // Replace spaces with slashes
//   //    x = s1.find(' ', x);
//   // }

//   // cout << "s1: " << s1 << endl;

//   // transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
//   // cout << "s1 (lowercase): " << s1 << endl;

//   // transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
//   // cout << "s1 (uppercase): " << s1 << endl;

//   return 0;
// }

#include <iostream>
#include <random>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

// enum class Side {
//     One, Two, Three, Four, Five, Six
// };

// struct HistBar {
//     int count;
//     Side label;
// };

// void rollDice(HistBar h[], int n);
// string histogram(HistBar h[], char c = '*');
// void reset(HistBar h[]);

// int main() {
//     HistBar hist[6] = {
//         {0, Side::One},
//         {0, Side::Two},
//         {0, Side::Three},
//         {0, Side::Four},
//         {0, Side::Five},
//         {0, Side::Six},
//     };

//     char choice;
//     do {
//         string title{"DICE ROLLING SIMULATION"};
//         cout << title << endl << string(title.length(), '=') << endl;
//         cout << "1. Roll dice" << endl;
//         cout << "2. Display Histogram" << endl;
//         cout << "3. Reset Histogram" << endl;
//         cout << "4. Quit Program" << endl;
//         cout << endl;
//         cin >> choice;

//         switch (choice) {
//             case '1':
//                 rollDice(hist, 100);  // Roll the dice once
//                 break;
//             case '2':
//                 cout << histogram(hist) << endl;
//                 break;
//             case '3':
//                 reset(hist);
//                 break;
//             case '4':
//                 cout << "Quitting program..." << endl;
//                 break;
//             default:
//                 cout << "Invalid choice. Please try again." << endl;
//         }
//     } while (choice != '4');

//     return 0;
// }

// void rollDice(HistBar h[], int n) {
//     default_random_engine en;
//     uniform_int_distribution<int> a{1, 6};
//     for (int i = 0; i < n; ++i) {
//         int roll = a(en);
//         cout << roll;
//         h[roll - 1].count++;
//     }
// }

// string histogram(HistBar h[], char c) {
//     stringstream table;
//     for (int i = 0; i < 6; ++i) {
//         table << "Side " << i + 1 << ": " << string(h[i].count, c) << " (" << h[i].count << ")" << endl;
//     }
//     return table.str();
// }

// void reset(HistBar h[]) {
//     for (int i = 0; i < 6; ++i) {
//         h[i].count = 0;
//     }
// }

void operator<<(vector<int>& v, int n){
    for(int i = 0; i < n; i++){
        v.pop_back();
    }
}

class C {
    private:
        int n {8};
        static int count;

    public:
        C(int n): n(n){count++;}
        C(): C(0){}
        
        void show(){
            std::cout << n << "(" << count << ")" << std::endl;
        }
};

int C::count = 0;

int main(){

    vector<int> v{2, 4, 6, 2, 2, 1, 7, 4};

    v << 3;

    for(int i : v){
        cout << i << ", ";
    }


    C a{23}, b{78}, c{10};
    a.show();
    b.show();
    c.show();


    return 0;
}