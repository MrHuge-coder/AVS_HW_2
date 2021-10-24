#ifndef __plane__
#define __plane__

#include <fstream>
using namespace std;

#include "../rnd.h"
#include "../Transport/transport.h"


class Plane : public Transport{
 public:
  virtual ~Plane() {}
  // Ввод параметров самолёта из файла
  virtual void In(ifstream &ifst);
  // Случайный ввод параметров самолёта
  virtual void InRnd();
  // Вывод параметров самолёта в форматируемый поток
  virtual void Out(ofstream &ofst);
 private:
  int max_distance, max_weight;
};

#endif //__plane__
