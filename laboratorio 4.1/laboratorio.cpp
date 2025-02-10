#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string nombre;
    int edad;
public:
    Animal(string n, int e) : nombre(n), edad(e) {}
    virtual void hacerSonido() = 0; // Método virtual puro
};

class Perro : public Animal {
public:
    Perro(string n, int e) : Animal(n, e) {}
    void hacerSonido() override {
        cout << nombre << " dice: Guau!" << endl;
    }
};

class Automovil {
private:
    string marca;
    int velocidad;
public:
    Automovil(string m, int v) : marca(m), velocidad(v) {}
    void acelerar() {
        velocidad += 10;
        cout << "El automóvil " << marca << " ahora va a " << velocidad << " km/h." << endl;
    }
};

class Persona {
private:
    string nombre;
    int edad;
public:
    Persona(string n, int e) : nombre(n), edad(e) {}
    void saludar() {
        cout << "Hola, mi nombre es " << nombre << " y tengo " << edad << " años." << endl;
    }
};

