//------------------------------------------------------------------------------
// container_Constr.cpp - содержит функции обработки контейнера
//------------------------------------------------------------------------------

#include "container.h"

//------------------------------------------------------------------------------
// Конструктор контейнера
Container::Container(int s): len(0), size(0) {
    storage = new Transport*[s];
}

//------------------------------------------------------------------------------
// Деструктор контейнера
Container::~Container() {
    Clear();
    delete[] storage;
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void Container::Clear() {
    for(int i = 0; i < len; i++) {
        delete storage[i];
    }
    len = 0;
}

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void Container::In(ifstream &ifst) {
    while(!ifst.eof()) {
        if((storage[len] = Transport::StaticIn(ifst)) != nullptr) {
            len++;
        }
    }
}

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
void Container::InRnd(int s) {
    if(s > size) {
        size = s;
    }
    while(len < s) {
        if((storage[len] = Transport::StaticInRnd()) != nullptr) {
            len++;
        }
    }
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void Container::Out(ofstream &ofst) {
    ofst << "Container contains " << len << " elements.\n";
    for(int i = 0; i < len; i++) {
        ofst << i << ": ";
        storage[i]->Out(ofst);
    }
}

//------------------------------------------------------------------------------
// Сортировка всех видов транспорта
void Container::ShakerSort() {
    int i, j, k, m = this->len;
    for (i = 0; i < m;) {
        for (j = i + 1; j < m; j++) {
            double a = this->storage[j]->PerfectTime(),
                b = this->storage[j - 1]->PerfectTime();
            if (a < b)
                swap(this->storage[j], this->storage[j - 1]);
        }
        m--;
        for (k = m - 1; k > i; k--) {
            if (this->storage[k]->PerfectTime() < this->storage[k - 1]->PerfectTime())
                swap(this->storage[k], this->storage[k - 1]);
        }
        i++;
    }
}
