//------------------------------------------------------------------------------
// rectangle.cpp - содержит методы прямоугольника
//------------------------------------------------------------------------------

#include <iostream>
#include "ship.h"
using namespace std;

//------------------------------------------------------------------------------
// Ввод параметров корабля из файла
void Ship::In(ifstream &ifst) {
    int n;
    ifst >> displacement >> n >> speed >> distantion;
    switch (n) {
        case 1:
            type = liner;
            break;
        case 2:
            type = tanker;
            break;
        case 3:
            type = tug;
            break;
        default:
            cout << displacement <<" - Wrong Ship Type Number \n";
    }
}

// Случайный ввод параметров корабля
void Ship::InRnd() {
    displacement = Transport::rnd20.Get();
    int n = Transport::rnd20.Get() % 3 + 1;
    speed = Transport::rnd20.Get();
    distantion = Transport::rnd20.Get();
    switch (n) {
        case 1:type = liner;
            break;
        case 2:type = tanker;
            break;
        case 3:type = tug;
            break;
        default:
            cout << "Wrong Sheep Type Number";
    }
}

//------------------------------------------------------------------------------
// Вывод параметров корабля в форматируемый поток
void Ship::Out(ofstream &ofst) {
    ofst << "It is Ship: displacement = "
         << displacement << ". Ship Type - " << type << ", speed = " << speed
         << ", distantion = " << distantion << " , Perfect Time = " << PerfectTime() << "\n";
}
