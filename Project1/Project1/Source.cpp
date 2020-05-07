
#include "conveyer.h"

int main() {
	vector<int> one{ 14, 9, 30, 24};
	vector<int> two{ 25, 12, 9, 31};
	auto Dx = new Conveyer;
	Dx->calculate(one, two);
	system("pause");
}
