//#include "Box.cpp"
#include <iostream>
#include <fstream>
#include "Box.h"
#include "Container.h"

using namespace std;
using namespace ConteinerSpase;
//linght - ������ 
//width - ������ 
//height - ������ 
//weight - ��� ������� 
 //value - ��������� ����������� ������� ( � ��������)


int main() {
	setlocale(LC_ALL, "Russian");

	Box one(1,2,3,4,5);
	Box two(6,7,8,9,10);
	Box thr(10, 11, 12, 2, 4);
	Box a1(10,11,12,0,0);
	
	Box *arr;
	arr = new Box[4];
	arr[0] = one;
	arr[1] = two;
	arr[2] = thr;
	arr[3] = a1;

	cout<< "��������� ���� ������: " << Box::valueSum(arr, 4) << "\n";  //�������� ��������� ��������� ���� ������� 
	cout <<"����� ������, ������, � ������ ��������� ��������?" << Box::sumBox(5, arr, 4) << "\n";  //���������, ��� ����� �, �, � ���� ������� �� ��������� ��������� ��������
	cout <<"������������ ��� �������, ���������� ��� �������: " << Box::maxWeight(65, arr, 3) <<"\n"; //������� ������������ ������������ ��� �������(�������? �� ����? ��� ����� ���� ���������� ��� �������) ����� ������� ������ ���V
	cout << "����� �� ������� ������� ���� � �����? " << Box::putInBox(arr, 4) << "\n";
	cout << one;
	cout << "\n_________________________________________ \n";

	Container cont(100, 100, 100, 300);
	cont.setBox(one);
	cont.setBox(two);
	cont.setBox(thr);
	
	cout << "���������� ������� � ����������: " << cont.sizeCont() << "\n";
	cout << "��������� ��� ����������� ����������: " << cont.summMassa() << "\n";
	cout << "��������� ��������� �����������: " << cont.summValue() << "(���) \n";

	system("pause");
	return 0;
}