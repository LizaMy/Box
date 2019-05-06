//#pragma once
#ifndef EXC0_BOX_H
#define EXC0_BOX_H

#include <iostream>

namespace ConteinerSpase {
 class Box {
	public:	int linght;//длинна 
	public:	int width; // высота
	public:	int height; //  ширина 
	public: double weight; // масса коробки 
	public: double value; // стоймость содердимого коробки ( в копейках)

			Box(int Linght, int Width, int Height, double Weight, int Value) {
				linght = Linght;
				width = Width;
				height = Height;
				weight = Weight;
				value = Value;
			}
			Box(): linght(0), width(0), height(0), weight(0), value(0){}
			// ~Box() = default;

			int getLinght() { return linght; }
			int getWidth() { return width; }
			int getHeight() { return height; }
			double getWeight() { return weight; }
			double getValue() { return value; }

			void setLinght(int lin) { linght = lin; }
			void setWidth(int wid) { width = wid; }
			void setHeight(int hei) { height = hei; }
			void setWeight(double wei) { weight = wei; }
			void setValue(double val) { value = val; }

			static double valueSum(Box *arrBox, int n);
			static bool sumBox(int num, Box *arrBox, int n);
			static double maxWeight(double maxV, Box *arrBox, int n);
			static bool putInBox(Box *arrBox, int n);

			friend ostream &operator<<(ostream &out, const Box &box);

		
		//	friend istream &operator>>(istream &in, Box &box);

	};
 ostream & operator<< (ostream &out, const Box &box) {
	 out << "Коробка: " << "ширина: " << box.height << " длинна: " << box.linght << " высота:" << box.width << " вес: " << box.weight << " стоймость: " << box.value;
	 return out;
 }

 //istream & operator>> (istream &in, Box &box) {
	// in >> box.height;
	// in >> box.linght;
	// in >> box.value;
	// in >> box.weight;
	// in >> box.width;
	// return in;

 //}
}
#endif //EXC0_BOX_H