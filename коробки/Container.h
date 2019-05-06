#pragma once
#ifndef EXC0_CONTAINER_H
#define EXC0_CONTAINER_H
//#include <iostream>
#include "Box.h"
#include <vector>
using namespace std;

using namespace ConteinerSpase;

namespace ConteinerSpase {

	class Container {
	  public: vector <Box> cont;
	  public:	int dlinna, shirina, vysota;
	  public: 	double maxVes;


		Container(int Dlinna, int Shirina, int Vysota, double MaxVes) {
			cont = {};
			dlinna = Dlinna;
			shirina = Shirina;
			vysota = Vysota;
			maxVes = MaxVes;
		}
		Container() :dlinna(0), shirina(0), vysota(0), maxVes(0) {
			cont = {};
		}
		
		void remove(int index); //������� ������� �� �������
		int sizeCont(); //���������� ������� � ���������� 
		double summMassa();
		double summValue();
		Box getBoxIndex(int index); //��������� ������� �� �������
		int setBox(Box box); //���������� ������� 
		Box operator[](int index) const;

	//	friend ostream &operator<< (ostream &out, const Container &cont);
	//	friend istream &operator>>(istream &in, Container &cont);
	};

}
#endif