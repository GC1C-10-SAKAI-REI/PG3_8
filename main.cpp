#include<stdio.h>
#include<stdlib.h>

//���ȎQ�ƍ\����
typedef struct cell
{
	int val;			//�l
	struct cell* prev;	//�O�̃Z��
	struct cell* next;	//���̃Z��
}CELL;

//�l��ǉ�����֐�
void Create();
//�Z���̈ꗗ�\��
void Index();
//�C�ӂ̈ʒu�̃A�h���X�܂ŒH��֐�
CELL *GetInsertListAddress();

int main()
{
	int iterator;		//�}������ӏ�
	int inputVal;		//�}������l
	CELL *insertCell;	//

	//�擪�ɓ��e����̃Z����錾(�擪�ł��邱�Ƃ𖾎������)
	CELL head;
	head.prev = nullptr;
	head.next = nullptr;

	while (true)
	{
		printf("���Ԗڂ̃Z���̌��ɑ}�����܂����H\n");
		scanf_s("%d", &iterator);

		printf("�}������l����͂��Ă�������\n");
		scanf_s("%d", &inputVal);
	}

	return 0;
}