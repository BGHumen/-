//Homework
//namespace "Is Чётное ?"
// C++
// by  @BGHumen
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a;
	cout << "Введите число , а программма скажет , чётное оно или нет ." << endl;
	cin >> a;
	if (a % 2) {
		cout << "Ваше число - нечётное !" << endl;
	}
	else if (a /  2) {
		cout << "Ваше число - чётное !" << endl;
	}
	else {
		cout << "Программа не может определить ваше число !\nУбедитесь , что оно является числом !" << endl;
	}
}
