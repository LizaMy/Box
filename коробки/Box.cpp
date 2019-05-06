#include <iostream>
#include <string>
#include "Box.h"
using namespace std;

using namespace ConteinerSpase;

 double  Box::valueSum(Box *arrBox, int n) {     //��������� �������
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + arrBox[i].value;
	}
	return sum;
}
//�������� ��� ����� ������ ������ � ������ �� �����������  ��������� ��������
bool Box::sumBox(int num, Box *arrBox, int n) {
	double sumLinght = 0;
	double sumWeight = 0;
	double sumHeight = 0;
	for (int i=0; i < n; i++) {
		sumLinght = sumLinght + arrBox[i].linght;
		sumWeight = sumWeight + arrBox[i].width;
		sumHeight = sumHeight + arrBox[i].height;
	}
	double sum = sumLinght + sumWeight + sumHeight;
	if (sum <= num) {
		return true;
	}
	else {
		return false;
	}
}

//������� ������������ ������������ ��� �������(�������? �� ����? ��� ����� ���� ���������� ��� �������) ����� ������� ������ ���V
double Box::maxWeight(double maxV, Box *arrBox, int n) {
	double volume; //�����
	double a1;
	double a2 = 0;
	for (int i = 0; i < n; i++) {
		volume = arrBox[i].height * arrBox[i].linght * arrBox[i].width;
		if (volume < maxV) {
			//a2 = a2 + arrBox[i].weight;
			a1 = arrBox[i].weight;
			if (a1 > a2) {
				a2 = a1;
			}
		}
	}
	return a2;
}
//������� ��������� ��� ��� ������� ����� ������� ���� � ����� �� ����� ����� 
bool Box::putInBox(Box *arrBox, int n) {
	//bool status = true;
	//int temp = 0;
	//status = true;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i; j < n - 1; j++) {
			if (arrBox[j].height > arrBox[j + 1].height || arrBox[j].height < arrBox[j + 1].height &&
				arrBox[j].linght > arrBox[j + 1].linght || arrBox[j].linght < arrBox[j + 1].linght &&
				arrBox[j].width > arrBox[j + 1].width || arrBox[j].width < arrBox[j + 1].width) {
				return true;
			}
		}
		}
	
	
	return false;
}

	bool operator== (Box &box1, Box &box2) {
		if (box1.height == box2.height && box1.linght == box2.linght && box1.value == box2.value && box1.weight == box2.weight && box1.width == box2.width) {
			return true;
		}
		return false;
	}

 //  ostream & operator<< (ostream &out, const Box &box) {
	//	out << "�������: " << "������: " << box.height << " ������: " << box.linght << " ������:" << box.width << " ���: " << box.weight << " ���������: " << box.value;
	//	return out;
	//}

	//istream & operator>> (istream &in, Box &box) {
	//	in >> box.height;
	//	in >> box.linght;
	//	in >> box.value;
	//	in >> box.weight;
	//	in >> box.width;
	//	return in;}
	



	
