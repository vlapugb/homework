#include <iostream>
#include <limits>

/* TODO
Используя заголовочный файл <limits>, std::cout, sizeof() и управляющие последовательности
cоставьте следующую таблицу

	Тип переменной		|	Размер,	|			Значение				|	Количество
						|	байт	|	Минимальное	|	Максимальное	|	значимых бит
	bool				|	1		|	false		|	true			|	1
	unsigned short		|	2		|	0			|	65535			|	16
	short
	unsigned int
	int
	unsigned long
	long
	unsigned long long
	long long
	char
	float
	double

для справки использовать http://www.cplusplus.com/reference/limits/numeric_limits/
*/

int main()
{
	setlocale(0, ""); // включение адекватного отображения кириллицы в консоль
	std::cout << std::boolalpha; // настройка консоли, вывод булевых типов как true / false
	std::cout << "Максимальное значение переменной типа int равно " << std::numeric_limits<int>::max(); // пример использования <limits>
}