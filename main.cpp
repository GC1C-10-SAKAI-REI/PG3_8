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
	//先頭に内容が空のセルを宣言(先頭であることを明示する為)
	CELL head;
	head.prev = nullptr;
	head.next = nullptr;

	return 0;
}