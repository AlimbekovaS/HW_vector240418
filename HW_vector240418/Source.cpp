#include"library.h"
#include"vector.h"
int main()
{
	srand(time(0));
	Vector v1(10);
	Vector v2(10);
	v1.print();
	v2.print();
	Vector c=v1 + v2;

	v1.print();
	/*v1.Push_Back(5);
	v1.print();*/
	system("pause");
	return 0;
}