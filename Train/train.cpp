//------------------------------------------------------------------------------
// triangle.cpp - содержит функции обработки треугольника
//------------------------------------------------------------------------------

#include "train.h"

//------------------------------------------------------------------------------
// Ввод параметров корабля из потока
void Train::In(ifstream &ifst) {
    ifst >> count_carriage >> speed >> distantion;
}

// Случайный ввод параметров корабля
void Train::InRnd() {
    count_carriage = Transport::rnd20.Get();
    speed = Transport::rnd20.Get();
    distantion = Transport::rnd20.Get();
}

//------------------------------------------------------------------------------
// Вывод параметров корабля в поток
void Train::Out(ofstream &ofst) {
    ofst << "It is Train: count of carriage = "
         << count_carriage << ", speed = " << speed << ", distantion = " << distantion <<
         " , Perfect Time = " << PerfectTime() <<  "\n";
}