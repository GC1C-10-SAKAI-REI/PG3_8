#include<stdio.h>
#include<stdlib.h>

//自己参照構造体
typedef struct cell
{
	int val;			//値
	struct cell* prev;	//前のセル
	struct cell* next;	//次のセル
}CELL;

//値を追加する関数
void Create();
//セルの一覧表示
void Index();
//任意の位置のアドレスまで辿る関数
CELL *GetInsertListAddress();

int main()
{
	//挿入する箇所
	int iterator;
	//挿入する値
	int inputVal;
	//
	CELL *insertCell;

	//先頭に内容が空のセルを宣言(先頭であることを明示する為)
	CELL head;
	head.prev = nullptr;
	head.next = nullptr;

	return 0;
}