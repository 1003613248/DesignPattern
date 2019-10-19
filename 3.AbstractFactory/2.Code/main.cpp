#include <iostream>
#include "AbstractFactory.h"

int main()
{
	printf("��������ģʽ\n");
	
	//���幤�������Ͳ�Ʒ�����
	AbstractFactory *fac = NULL;
	AbstractBall *ball = NULL;
	AbstractShirt *shirt = NULL;

	fac = new BasketballFactory();
	ball = fac->getBall();
	shirt = fac->getShirt();

	fac = new FootballFactory();
	ball = fac->getBall();
	shirt = fac->getShirt();

	system("pause");
	return 0;
}