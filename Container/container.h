#ifndef __container__
#define __container__

//------------------------------------------------------------------------------
// container.h - содержит тип данных,
// представляющий простейший контейнер
//------------------------------------------------------------------------------

#include "../Transport/transport.h"

//------------------------------------------------------------------------------
// Простейший контейнер на основе одномерного массива
class Container {
public:
    explicit Container(int s);
    ~Container();

    // Ввод содержимого контейнера из указанного потока
    void In(ifstream &ifst);
    // Случайный ввод содержимого контейнера
    void InRnd(int size);
    // Вывод содержимого контейнера в указанный поток
    void Out(ofstream &ofst);
    // Сортировка всех видов транспорта по идеальному времени
    void ShakerSort();
private:
    void Clear(); // Очистка контейнера от данных
    int len; // текущая длина
    Transport** storage;
    int size;
};

#endif
