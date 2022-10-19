#include <iostream>

int main() {
	int kolvo = 0;
	int leng = 0;
	int k = 0;
	int ans = 0;
	std::string line; 
	std::cin >> kolvo;
	for (int trying = 0; trying <= kolvo; trying++) {
		std::cin >> leng;
		std::cin >> k;
		std::cin >> line;
		int countB = 0;
		int countA = 0;
		std::string maxx;
		int flag = 1;
		for (int tryy = 0; tryy < leng; tryy++) {
			if (flag == 1 and line[tryy] == 'B') {
				countB += 1; }
				if (flag == 0 and line[tryy] == 'B') {
				    maxx += countA;
				    flag = 1;
				    countA = 0;
					countB += 1; }
					if (flag == 1 and line[tryy] == 'W') {
						maxx += countB;
							countB = 0;
							countA += 1;
							flag = 0;
					}
					if (flag == 0 and line[tryy] == 'W') {
							countA += 1;					

						}
		}
		std::cout << maxx;
	}
}
