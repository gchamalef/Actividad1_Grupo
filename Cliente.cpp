#include <iostream>
#include <string>
using namespace std;

class Cliente {
private:
    string nit;

public:

    Cliente(const string& _nit) : nit(_nit) {}

    string getNit() const { return nit; }
    void setNit(const string& value) { nit = value; }
};
