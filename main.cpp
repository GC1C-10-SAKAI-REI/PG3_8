#include<stdio.h>
#include<stdlib.h>

//���ȎQ�ƍ\����
typedef struct cell
{
	int val;			//
	struct cell *prev;	//�O�̃Z��
	struct cell *next;	//���̃Z��
}CELL;

//
void Create();
//
void Index();
//
CELL *GetInsertListAddress();

int main()
{
	int iterator;
	int inputVal;
	CELL *insertCell;

	return 0;
}