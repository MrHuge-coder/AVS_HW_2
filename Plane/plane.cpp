#include <iostream>
using namespace std;
#include "plane.h"

void Plane::In(ifstream &ifst) {
    ifst >> max_distance >> max_weight >> speed >> distantion;
}

void Plane::InRnd() {
    max_distance = Transport::rnd20.Get();
    max_weight = Transport::rnd20.Get();
    speed = Transport::rnd20.Get();
    distantion = Transport::rnd20.Get();
}
void Plane::Out(ofstream &ofst) {
    ofst << "It is Plane: max distance = " << max_distance << ", max weight = " << max_weight
         << ", speed = " << speed << ", distantion = " << distantion <<
         " , Perfect Time = " << PerfectTime() << "\n";
}
