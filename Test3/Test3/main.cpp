#include<stdio.h>
#include<string>

// ��P��
/*
	00101100 + 01010101 = 10000001
	10110000 + 00001111 = 10111111
*/

// ��Q��
/*
	00101100 + 01010101 = 129
	10110000 + 00001111 = 191
*/

// ��R��
/*
	char   �P�o�C�g
	int    �S�o�C�g
	float  �S�o�C�g
	double �W�o�C�g
*/

// ��S��
/*
	char   �P�o�C�g
	int    �S�o�C�g
	float  �S�o�C�g
	double �W�o�C�g
*/

// ��T��
/*
int main()
{
	int num = 5;

	num = num % 3;

	if( num == 0)
	{
		�@
	}
	else if( num == 2)
	{
		�A
	}
	else
	{
		�B
	}
}

	//���� �B
*/

//��U��

/*
int main()
{
	int n;
	int n2;

	printf("��������͂��Ă��������B\n");
	scanf_s("%d", &n);
	printf("��������͂��Ă��������B\n");
	scanf_s("%d", &n2);

	if (n % 2 == 1)
	{
		printf("%d\n", n + n2);
	}
	else
	{
		printf("%d\n", n - n2);
	}

}
*/

// ��V��
/*
int main()
{
	int move = false;
	std::string str;
	str = "end";

	while (move == false)
	{
		int n;
		int n2;
		printf("��������͂��Ă��������B\n");
		scanf_s("%d", &n);
		printf("��������͂��Ă��������B\n");
		scanf_s("%d", &n2);

		if (n % 2 == 1)
		{
			printf("%d\n", n + n2);
		}
		else if (str == "end")
		{
			move = true;
			break;
		}
		else 
		{
			printf("%d\n", n - n2);
		}


	}

}
*/

// ��W��
/*
class Point
{
public:
	Point() { Clear(); }

	void Clear()
	{
		x = 0;
		y = 0;
		z = 0;
	}
public:
	int x, y, z;
};

int main()
{
	Point point;
	Point nextPoint;

	nextPoint.x = 100;
	nextPoint.y = 30;

	while (1)
	{
		if (point.x < nextPoint.x)
		{
			point.x++;
		}
		else if (point.x > nextPoint.x)
		{
			point.x--;
		}

		if (point.y < nextPoint.y)
		{
			point.y++;
		}
		else if (point.y > nextPoint.y)
		{
			point.y--;
		}
		printf("pointX = %d\n", point.x);
		printf("pointY = %d\n", point.y);

		if (point.x == nextPoint.x &&
			point.y == nextPoint.y)
		{
			break;
		}
	}
}
*/