#include<iostream>
int main() {
	//break的使用时机

	//1、出现在switch语句中
	std::cout << "请选择副本难度" << std::endl;
	std::cout << "1.普通" << std::endl;
	std::cout << "2.中等" << std::endl;
	std::cout << "3.困难\n" << std::endl;
	int select = 0;//创建选择结果变量
	std::cin >> select;//用户输入

	switch (select) {
	case 1:
		std::cout << "您选择的是 普通 难度" << std::endl;
		break;
	case 2:
		std::cout << "您选择的是 中等 难度" << std::endl;
		break;
	case 3:
		std::cout << "您选择的是 困难 难度" << std::endl;
		break;
	}
	//2、出现在循环语句中
	for (int i = 0; i <= 10; i++) {
		//如果i等于5，退出循环，不再打印
		if (i == 5) {
			break;
		}
		std::cout << i << std::endl;
	}
	//3、出现在嵌套循环语句中
	for (int a = 0; a < 10; a++) {
		for (int b = 0; b < 10; b++) {
			if (b == 5) {
				break;//退出内层循环，不影响外层循环
			}
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}