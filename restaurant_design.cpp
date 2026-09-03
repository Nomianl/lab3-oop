/*
 * Course: COEN 2220 - Programming 2
 * Name: [Your Name]
 * Lab: Lab 3 - Object-Oriented Programming, Part 1
 * Description: Class skeletons - restaurant case design
 * Due date: [Date]
 */

#include <iostream>
#include <string>
using namespace std;

// Reminder of the scenario (see "Contexto" above for the full version):
// "A restaurant takes orders from tables. Each order has a list of
//  dishes, each with a name and a price. At the end, the restaurant
//  calculates the order total, including a 10% service charge."

// TODO (Parte G): Declara la clase Dish.
//   - Miembros privados que necesita saber un plato (piensa en tu
//     respuesta a la pregunta 1 de arriba).
//   - Constructor(es) que consideres necesarios.
//   - Getters para sus atributos.
//   No hace falta implementar el cuerpo de cada funcion - un prototipo
//   dentro de la clase es suficiente para este ejercicio.

class Dish
{
    private:
        string name;
        double price;

    public:
        // Constructor
        Dish(string n, double p) : name(n), price(p) {}

        // Getters
        string getName() const { return name; }
        double getPrice() const { return price; }
};

// TODO (Parte G): Declara la clase Order.
//   - Como guarda la lista de platos (ver tu respuesta a la pregunta 2).
//   - Necesita un metodo para calcular el total, incluyendo el 10%
//     de cargo de servicio - decide tu si ese calculo vive aqui o
//     en Restaurant (ver tu respuesta a la pregunta 3).

class Order
{
    private:
        // A vector to hold the list of dishes in the order
        vector<Dish> dishes;

    public:
        // Method to add a dish to the order
        void addDish(const Dish& dish) {
            dishes.push_back(dish);
        }

        // Method to calculate the total cost of the order, including service charge
        double calculateTotal() const {
            double total = 0.0;
            for (const auto& dish : dishes) {
                total += dish.getPrice();
            }
            return total * 1.10; // Adding 10% service charge
        }
};

// TODO (Parte G, opcional): Declara Restaurant si decidiste que el
// calculo del cargo de servicio le pertenece a esta clase en vez de
// a Order.

class Restaurant
{
    private:
        vector<Order> orders;

    public:
        // Method to add an order to the restaurant
        void addOrder(const Order& order) {
            orders.push_back(order);
        }

        // Method to calculate the total revenue from all orders
        double calculateTotalRevenue() const {
            double totalRevenue = 0.0;
            for (const auto& order : orders) {
                totalRevenue += order.calculateTotal();
            }
            return totalRevenue;
        }
};

int main() {
    cout << "Esqueletos de diseno - sin logica de ejecucion en este bloque.\n";
    return 0;
}