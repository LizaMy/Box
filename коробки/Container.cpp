//#include "Box.cpp"
//#include "Box.h"
#include "Container.h"
#include <vector>
#include <iostream>

using namespace std;
using namespace ConteinerSpase;

void Container::remove(int index) {
	cont.erase(cont.begin() + index);
}

int Container::sizeCont() { //количество коробок в контейнере
	return cont.size();
}

double Container::summMassa() {
	double sum = 0;
	for (int i = 0; i < sizeCont(); i++) {
		sum = sum + cont[i].weight;
	}
	return sum;
}

double Container::summValue() {
	double sum = 0;
	for (int i = 0; i < sizeCont(); i++) {
		sum = sum + cont[i].value;
	}
	return sum;
}

Box Container::getBoxIndex(int index) //получить коробку
{
	if (index < 0 || index > sizeCont() - 1) {
		throw exception("Такого индекса не существует");
	}
	else {
		return cont[index];
	}
}

int Container::setBox(Box box) { //добавить коробку
	if ((box.weight + summMassa()) > maxVes) {
		throw exception("Привышен максимальный вес");
	}
	cont.push_back(box);
	return cont.size() + 1;
}

 ostream & operator<<(ostream &out, const Container &cont) {
	out << "Контейнер: ширина: " << cont.shirina << "; высота: " << cont.vysota << "; длинна: " << cont.dlinna << "; максимальный вес: " << cont.maxVes;
		return out;
 }

 istream & operator>>(istream &in, Container &cont) {
	in >> cont.dlinna;
	in >> cont.shirina;
	in >> cont.vysota;
	in >> cont.maxVes;
	return in;
}

Box Container::operator[](int index) const {
	if (index < 0 || index > cont.size()) {
		throw exception("Такого индекса не существует");
	}
	else {
		return cont[index];
	}
}
