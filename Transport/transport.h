#ifndef __transport__
#define __transport__

//------------------------------------------------------------------------------
// transport.h - содержит описание обобщающего траспорта,
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;
#include "../rnd.h"

//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся транспорты
class Transport {
 protected:
    static Random rnd20;
    static Random rnd3;

 public:
    int64_t speed;
    double distantion;
    virtual ~Transport() {};
    // Ввод обобщенного транспорта
    static Transport *StaticIn(ifstream &ifdt);
    // Ввод обобщенного транспорта
    virtual void In(ifstream &ifdt) = 0;
    // Случайный ввод обобщенного транспорта
    static Transport *StaticInRnd();
    // Виртуальный метод ввода случайного транспорта
    virtual void InRnd() = 0;
    // Вывод обобщенного транспорта
    virtual void Out(ofstream &ofst) = 0;
    // Вычисление периметра обобщенного транспорта
    virtual double PerfectTime();
};

#endif
