// chengyuanchongzai.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Clocation
{
private:
	int x;
	int y;
public:
	void inut(int XX, int YY)
	{
		x = XX;
		y = YY;
	}
	void yes(int XX)
	{
		x = XX;
	}
	int no()
	{
		return x;
	}
	void gun()
	{
		cout << "x=" << x << "    y=" << y << endl;
	}
};
int main()
{
	Clocation ol;
	ol.inut(200, 100);
	ol.yes(520);
	ol.no();
	ol.gun();
	int m;
	m = ol.no();
	cout << "m=" << m << endl;
	return 0;
}

