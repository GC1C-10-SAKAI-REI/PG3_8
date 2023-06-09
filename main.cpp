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
	int iterator;		//挿入する箇所
	int inputVal;		//挿入する値
	CELL *insertCell;	//

	//先頭に内容が空のセルを宣言(先頭であることを明示する為)
	CELL head;
	head.prev = nullptr;
	head.next = nullptr;

	while (true)
	{
		printf("何番目のセルの後ろに挿入しますか？\n");
		scanf_s("%d", &iterator);

		printf("挿入する値を入力してください\n");
		scanf_s("%d", &inputVal);
	}

	return 0;
}