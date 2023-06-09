#include<stdio.h>
#include<stdlib.h>

//自己参照構造体
typedef struct cell
{
	int val;			//
	struct cell *prev;	//前のセル
	struct cell *next;	//次のセル
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