#include <iostream>
#include <string>
using namespace std;

class Empleado {
private:
    string codigo_empleado;
    string puesto;

public:
    Empleado(const string& _codigo_empleado, const string& _puesto) : codigo_empleado(_codigo_empleado), puesto(_puesto) {}

    string getCodigoEmpleado() const { return codigo_empleado; }
    void setCodigoEmpleado(const string& value) { codigo_empleado = value; }

    string getPuesto() const { return puesto; }
    void setPuesto(const string& value) { puesto = value; }
};
