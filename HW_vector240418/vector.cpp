#include"library.h"
#include"vector.h"
Vector::Vector()
{
	cur_size = 0;
	buf_size = 0;
	els = nullptr;
}
Vector::Vector(int size)
{
	this->cur_size = size;
	this->buf_size = size;
	this->els = new int[size];
	for (int i = 0;i < cur_size;i++)
	{
		els[i] = rand()%15;
	}
}

void Vector:: print()
{
	for (int i = 0;i < cur_size;i++)
	{
		cout<<setw(5)<<els[i];
	}
	cout << endl;
}
void Vector::Push_Back(const int &el)
{
	if (buf_size <= cur_size)
	{
		buf_size *= 2;
		int *tmp = new int[buf_size];
		for (int i = 0;i < cur_size;i++)
		{
			tmp[i] = els[i];
		}
		delete[]els;
		els = tmp;
	}
	els[cur_size] = el;
	cur_size++;
	
}

Vector Vector :: operator+(const Vector & obj)
{
	//Vector *tmp=new Vector[10];
	for (int i = 0;i < cur_size;i++)
	{
		this->els[i] += obj.els[i];
	}
	return *this;
}