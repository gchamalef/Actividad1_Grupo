#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string nombres;
    string apellidos;
    string direccion;
    string telefono;
    string fecha_nacimiento;

public:

    // Constructor por defecto
    Person() {}


    // Constructor con parámetros
    Person(const string& _nombres, const string& _apellidos, const string& _direccion, const string& _telefono, const string& _fecha_nacimiento)
        : nombres(_nombres), apellidos(_apellidos), direccion(_direccion), telefono(_telefono), fecha_nacimiento(_fecha_nacimiento) {}



    // Métodos Get y Set
    string getNombres() const { return nombres; }
    void setNombres(const string& value) { nombres = value; }

    string getApellidos() const { return apellidos; }
    void setApellidos(const string& value) { apellidos = value; }

    string getDireccion() const { return direccion; }
    void setDireccion(const string& value) { direccion = value; }

    string getTelefono() const { return telefono; }
    void setTelefono(const string& value) { telefono = value; }

    string getFechaNacimiento() const { return fecha_nacimiento; }
    void setFechaNacimiento(const string& value) { fecha_nacimiento = value; }

    // Métodos para CRUD (Crear, Leer, Actualizar, Borrar)
    void crear() {
        // Implementación para crear un nuevo registro de persona
    }



    // metodos

    void crear() {}
    void leer() {}
    void actualizar() {}
    void borrar() {}        

    
    // main principal 
int main() {

    return 0;
}

}