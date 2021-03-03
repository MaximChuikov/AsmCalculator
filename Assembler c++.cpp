#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	cout << "Write a\n"; cin >> a;
	cout << "Write b\n"; cin >> b;
	cout << "Write c\n"; cin >> c;
	cout << "Write d\n"; cin >> d;
	cout << "Write e\n"; cin >> e;

	int answer = a;
	_asm
	{
		mov eax, answer;	записываю в еах число а
		add eax, b;			a + b
		mul c;				в регистре eах выполняем умножение
		sub eax, d;			вычитание
		div e;				в регистре ах делим
		mov answer, eax;	передаем значение в ответ
	}
	cout << endl << "Answer: " << answer << endl;
	//x = (((a + b) * c) - d) / e
}