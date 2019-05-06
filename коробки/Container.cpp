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

int Container::sizeCont() { //���������� ������� � ����������
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

Box Container::getBoxIndex(int index) //�������� �������
{
	if (index < 0 || index > sizeCont() - 1) {
		throw exception("������ ������� �� ����������");
	}
	else {
		return cont[index];
	}
}

int Container::setBox(Box box) { //�������� �������
	if ((box.weight + summMassa()) > maxVes) {
		throw exception("�������� ������������ ���");
	}
	cont.push_back(box);
	return cont.size() + 1;
}

 ostream & operator<<(ostream &out, const Container &cont) {
	out << "���������: ������: " << cont.shirina << "; ������: " << cont.vysota << "; ������: " << cont.dlinna << "; ������������ ���: " << cont.maxVes;
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
		throw exception("������ ������� �� ����������");
	}
	else {
		return cont[index];
	}
}
