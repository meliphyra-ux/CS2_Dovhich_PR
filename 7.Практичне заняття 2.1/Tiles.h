
#pragma once
#include <iostream>
using namespace std;

class Tiles
{
public:
	int  size_h;
	int size_w;
	string brand;
	double price;

	Tiles(int _size_h, int _size_w, string _brand, double _price)
	{
		size_h = _size_h;
		size_w = _size_w;
		brand = _brand;
		price = _price;
	}
	void setSize_h(int _size_h)
	{
		size_h = _size_h;
	}
	void setSize_w(int _size_w)
	{
		size_w = _size_w;
	}
	void setBrand(string _brand)
	{
		brand = _brand;
	}
	void setPrice(double _price)
	{
		price = _price;
	}

	int getSize_h()
	{
		return size_h;
	}
	int getSize_w()
	{
		return size_w;
	}
	string getBrand()
	{
		return brand;
	}
	double getPrice()
	{
		return price;
	}

	void getData()
	{
		cout << "Brand: " << brand << "\nPrice: " << price << "\nSize: " << size_h << "\nSize: " << size_w << endl;
	}
	;
};

