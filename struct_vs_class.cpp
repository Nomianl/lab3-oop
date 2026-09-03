/*
 * Course: COEN 2220 - Programming 2
 * Name: [Keanel Martinez Aguilar]
 * Lab: Lab 3 - Object-Oriented Programming, Part 1
 * Description: Converting a struct to a class with encapsulation
 * Due date: [9/3/2026]
 */

#include <iostream>
using namespace std;

struct RectangleStruct
{
    double width;
    double height;
};

// TODO (Parte F): Declara e implementa RectangleClass aqui abajo,
// convirtiendo RectangleStruct a una class con encapsulacion real:
class RectangleClass
{
    //   - width y height como miembros privados
    private:
        double width;
        double height;

    public:
        // Default constructor
        RectangleClass() {
            width = 0.0;
            height = 0.0;
        }

        //   - setWidth(double) y setHeight(double) que solo acepten valores > 0
        //     (si el valor no es valido, no lo asignes, y no hace falta mensaje de error aqui)
        void setWidth(double w) {
            if (w > 0)
                width = w;
        }

        void setHeight(double h) {
            if (h > 0)
                height = h;
        }

        //   - getWidth() const y getHeight() const
        double getWidth() const { return width; }
        double getHeight() const { return height; }

        //   - getArea() const
        double getArea() const { return width * height; }
};

int main() {
    // Esto compila hoy, sin ningun problema - y ese es el problema:
    RectangleStruct r;
    r.width = -5.0;    // no tiene sentido, pero nada lo impide
    r.height = 3.0;
    cout << "Struct area (con ancho invalido): " << (r.width * r.height) << endl;

    // TODO (Parte F): Crea un objeto de tipo RectangleClass, intenta asignarle un
    // width negativo con setWidth(), y confirma que NO se acepta
    // (el area calculada con datos validos previos, si los hubo,
    // deberia quedar intacta).

    
    RectangleClass rect;
    cout << "\nInitial Class area: " << rect.getArea() << endl;

    rect.setWidth(4.0);
    rect.setHeight(5.0);
    cout << "Updated Class area (4x5): " << rect.getArea() << endl;

    rect.setWidth(-5.0); // Should be rejected by setWidth()
    cout << "Class area after attempting setWidth(-5.0): " << rect.getArea() << endl;

    return 0;
}