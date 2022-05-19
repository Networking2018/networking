#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main() {
	//Считываем входное число в массив s, начиная с первой(не нулевой) позиции.Вычисляем длину строки len.
	char s[200];
	s[0] = '0';
	gets(s + 1);
	int len = strlen(s), cur = len - 1;

	//Ищем первую с конца ненулевую цифру.
	while (s[cur] == '0') cur--;

	//Уменьшаем ее на 1.
	s[cur--]--;

	//Ищем слева от уменьшенной цифры такую, которую можно увеличить на 1. То есть пропускаем все девятки.
	while (s[cur] == '9') cur--;

	//Увеличиваем цифру на 1.
	s[cur]++;

	//Сортируем цифры.
	sort(s + cur + 1, s + len);

	//Выводим результат.Если в нулевой позиции(ведущим) стоит ноль, то не выводим его.
	puts(s + (s[0] == '0'));
	return 0;
}
