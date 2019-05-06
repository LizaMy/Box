//#include "Box.cpp"
#include <iostream>
#include <fstream>
#include "Box.h"
#include "Container.h"

using namespace std;
using namespace ConteinerSpase;
//linght - длинна 
//width - высота 
//height - ширина 
//weight - вес коробки 
 //value - стоймость содердимого коробки ( в копейках)


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

	cout<< "Стоймость всех кробок: " << Box::valueSum(arr, 4) << "\n";  //вычислем суммарную стоймость всех коробок 
	cout <<"Сумма длинны, ширины, и высоты превышает значение?" << Box::sumBox(5, arr, 4) << "\n";  //Проверяет, что сумма д, ш, в всех коробок не превышает заданного значения
	cout <<"Максимальный вес коробки, подходящей под условие: " << Box::maxWeight(65, arr, 3) <<"\n"; //функция определяющая максимальный вес коробок(КОРОБКИ? ИЗ ВСЕХ? ИЛИ СУММУ ВСЕХ ПОДХОДЯЩИХ ПОД УСЛОВИЕ) объем которых меньше махV
	cout << "Можно ли вложить коробки друг в друга? " << Box::putInBox(arr, 4) << "\n";
	cout << one;
	cout << "\n_________________________________________ \n";

	Container cont(100, 100, 100, 300);
	cont.setBox(one);
	cont.setBox(two);
	cont.setBox(thr);
	
	cout << "Количество коробок в контейнере: " << cont.sizeCont() << "\n";
	cout << "Суммарный вес содержимого контейнера: " << cont.summMassa() << "\n";
	cout << "Суммарная стоймость содержимого: " << cont.summValue() << "(коп) \n";

	system("pause");
	return 0;
}