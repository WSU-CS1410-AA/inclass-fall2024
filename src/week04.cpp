#include <iostream>
#include <string>

using namespace std;
enum class DayOfWeek {
    Sun = 1, Mon, Tue, Wed, Thu, Fri, Sat
};



string get_day_name(DayOfWeek day){
    switch(day){
        case DayOfWeek::Sun: return "Sunday";
        case DayOfWeek::Mon: return "Monday";
        case DayOfWeek::Tue: return "Tue";
        case DayOfWeek::Wed: return "Wednesday";
        case DayOfWeek::Thu: return "Thursday";
        case DayOfWeek::Fri: return "Friday";
        default: return "Saturday";
    }
}

struct Marker {
    string color;
    string size, brand;
    bool has_lid;
    double price;
};

string display_marker(const Marker& m){
    return m.brand + "(" + m.color + ")";
}

int main(){
    int n{10};
    DayOfWeek today{DayOfWeek::Thu};
    Marker redM{"RED", "Medium", "Expo", true, .5};
    Marker blackM{"BLACK", "Small", "Expo", false, .99};

    cout << "Today is " << get_day_name(today) << endl;

    cout << "My marker is " << display_marker(redM) << endl;


    int count{10};
    int& n_students = count;

    cout << count << endl;

    n_students = 12;

    cout << count << endl;



    return 0;
}

enum class BillKind {
    ONE, FIVE, TEN, TWENTY, FIFTY, HUNDRED
};

struct Bill {
    int count;
    short value;
    BillKind kind;
};


Bill two_hundreds{10, 20, BillKind::TWENTY};
