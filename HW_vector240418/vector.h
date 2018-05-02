#pragma once
#include"library.h"
class Vector
{
private:
	int cur_size;
	int buf_size;
	int * els;
public:
	Vector();
	
	Vector(int size);

	void print();
	void Push_Back(const int &el);
	Vector operator+(const Vector & obj);
	
	
};
