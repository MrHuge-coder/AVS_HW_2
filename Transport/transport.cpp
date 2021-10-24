//------------------------------------------------------------------------------
// shape.cpp - содержит процедуры связанные с обработкой обобщенной фигуры
// и создания произвольной фигуры
//------------------------------------------------------------------------------

#include "../Ship/ship.h"
#include "../Train/train.h"
#include "../Plane/plane.h"
#include "transport.h"

//------------------------------------------------------------------------------
Random Transport::rnd20(1, 20);
Random Transport::rnd3(1, 3);

//------------------------------------------------------------------------------
// Ввод параметров обобщенной транспорта из файла
Transport* Transport::StaticIn(ifstream &ifst) {
    int k;
    ifst >> k;
    Transport* sp = nullptr;
    switch(k) {
        case 1:
            sp = new Ship;
            break;
        case 2:
            sp = new Train;
            break;
        case 3:
            sp = new Plane;
            break;
    }
    sp->In(ifst);
    return sp;
}

// Случайный ввод обобщенного транспорта
Transport *Transport::StaticInRnd() {
    auto k = Transport::rnd3.Get();
    Transport* sp = nullptr;
    switch(k) {
        case 1:
            sp = new Ship;
            break;
        case 2:
            sp = new Train;
            break;
        case 3:
            sp = new Plane;
            break;
    }
    sp->InRnd();
    return sp;
}
double Transport::PerfectTime() {
    return double(distantion / (double)speed);
}
