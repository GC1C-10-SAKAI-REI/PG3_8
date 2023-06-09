#include<stdio.h>
#include<stdlib.h>

//自己参照構造体
typedef struct cell
{
	int val;			//値
	struct cell* prev;	//前のセル
	struct cell* next;	//次のセル
}CELL;

int main()
{

	return 0;
}