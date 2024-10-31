#include <iostream>
#include <string>
#include <iomanip>

class Account {
  private:
    // Data members
    int id;
    double balance;
    std::string type;
    double rate;

  public:
    // Constructor
    Account(int id): Account(id, 0.0, "Checking", 0.0001){}//id(id), balance(0.0), type("Checking"), rate(0.0001){}
    Account(int id, double b, std::string t, double rate): id(id), balance(b), type(t), rate(rate){
    }

    Account(const Account& other){
      
    }

    int getId() const { return id; } // Getter, Accessor
    void setId(int id) { id = id; } // Setter, Mutator

    double getBalance() const { return balance; } // Getter, Accessor
    void setBalance(double b) { this->balance = b; } // Setter, Mutator

    const std::string& getType() const { return type; } // Getter, Accessor
    void setType(const std::string& type) { this->type = type; } // Setter, Mutator

    double getRate() const { return rate; } // Getter, Accessor
    void setRate(double r) { rate = r; } // Setter, Mutator

    void show(){
      std::cout << std::setw(10) << "ID: " << id  << std::endl
                << std::setw(10) << "BALANCE: " << balance  << std::endl
                << std::setw(10) << "TYPE: " << type << std::endl
                << std::setw(10) << "RATE: " << rate << std::endl; 
    }

    ~Account(){}
};

int main(){
  Account a{123, 100.0, "Checking", 0.005};
  Account b{234};
  Account c {b}; // using a copy constructor

  Account* c = new Account{173, 100.0, "Checking", 0.005};
  Account* d = new Account{230};

  a.show();
  b.show();

  c->show();
  d->show();



  delete c, d;

  return 0;
}