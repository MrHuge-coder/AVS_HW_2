#ifndef __train__
#define __train__

//------------------------------------------------------------------------------
// train.h - содержит описание поезда
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "../rnd.h"
#include "../Transport/transport.h"

//------------------------------------------------------------------------------
// Поезд
class Train: public Transport {
public:
    virtual ~Train() {}
    // Ввод параметров треугольника из файла
    virtual void In(ifstream &ifst);
    // Случайный ввод параметров треугольника
    virtual void InRnd();
    // Вывод параметров треугольника в форматируемый поток
    virtual void Out(ofstream &ofst);
private:
    int count_carriage; // количество вагонов
};

#endif //__train__
