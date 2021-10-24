#ifndef __ship__
#define __ship__

//------------------------------------------------------------------------------
// rectangle.h - содержит описание прямоугольника  и его интерфейса
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "../rnd.h"
#include "../Transport/transport.h"

// прямоугольник
class Ship: public Transport {
public:
    virtual ~Ship() {}
    // Ввод параметров корабля из файла
    virtual void In(ifstream &ifst);
    // Случайный ввод параметров корабля
    virtual void InRnd();
    // Вывод параметров корабля в форматируемый поток
    virtual void Out(ofstream &ofst);
private:
    int displacement;
    enum types{
        liner,
        tug,
        tanker
    };
    types type;
};

#endif //__ship__
