#include<stdio.h>
#include<stdlib.h>

//���ȎQ�ƍ\����
typedef struct cell
{
	int val;			//�l
	struct cell* prev;	//�O�̃Z��
	struct cell* next;	//���̃Z��
}CELL;

int main()
{
	//�擪�ɓ��e����̃Z����錾(�擪�ł��邱�Ƃ𖾎������)
	CELL head;
	head.prev = nullptr;
	head.next = nullptr;

	return 0;
}