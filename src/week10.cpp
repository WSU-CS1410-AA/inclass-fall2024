#include <iostream>
#include <vector>
using namespace std;

void operator+(vector<int>& a, int b){
  a.push_back(b);
}

void operator<<(vector<int>& a, int b){
  for(int i = 0; i < b; i++){
    a.pop_back();
  }
}

ostream& operator<<(ostream& out, vector<int> v){
  for(int e : v){
    out << e << "  ";
  }

  return out;
}



class C {
  private:
    double number = 4.5;
    char type = 'P';

  public:
    C& operator+(int b){
      number += b;
      return *this;
    }

    C& operator-(int b){
      number -= b;
      return *this;
    }

    void operator++(){
      number++;
    }

    bool operator==(int b){
      return number == b;
    }

    int operator[](int index){
      if(index == 0){
        return type;
      } else {
        return number;
      }
    }

    friend ostream& operator<<(ostream& out, const C& c){
      out << c.type << ":" << c.number;

      return out;
    }

    friend istream& operator>>(istream& in, C& c){
      char trash;

      in >> c.type >> trash >> c.number;

      return in;
    }

};


int main(){
  vector<int> v{12, 3, 6, 19, 20, 17};

  v + 10; // The intention is to push 10 at the back of the vector ==> operator+(v, 10)

  cout << v << endl;

  v << 3; // The intention is to pop the last three elements of the vector

  cout << v << endl;

  C a;

  cout << "Enter a C object (for example P:10 ): ";
  cin >> a;

  a + 3 + 6 + 7; // a.operator+(3)
  cout << a << endl; //operator(cout, a)
  a - 6;
  cout << a << endl;
  ++a; // a.operator++()
  cout << a << endl;
  cout << (a == 15) << endl; // a.operator==(15)
  cout << a << endl;

  cout << static_cast<char>(a[0]) << " - " << a[1] << endl;

  return 0;
}