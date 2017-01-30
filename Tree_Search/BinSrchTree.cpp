#include "BinSrchTree.h"


void main(){
	
	BinSrchTree tree;

	tree.insert(new BinaryNode(35));
	tree.insert(new BinaryNode(18));
	tree.insert(new BinaryNode(7));
	tree.insert(new BinaryNode(26));
	tree.insert(new BinaryNode(12));
	tree.insert(new BinaryNode(3));
	tree.insert(new BinaryNode(68));
	tree.insert(new BinaryNode(22));
	tree.insert(new BinaryNode(30));
	tree.insert(new BinaryNode(99));

	printf(" ����� ���� = %d\n", tree.getCount());
	printf(" �縻�� ���� = %d\n", tree.getLeafCount());
	printf(" Ʈ���� ���� = %d\n", tree.getHeight());

	tree.inorder();
	tree.preorder();
	tree.postorder();

	printf("case 1 ==> ��� 3 ����\n");
	tree.remove(3);
	printf("case 2 ==> ��� 68 ����\n");
	tree.remove(68);
	printf("case 3 ==> ��� 18 ����\n");
	tree.remove(18);
	printf("case 3 ==> ��� 35 ���� (��Ʈ ��� ����)\n");
	tree.remove(35);

	printf(" ����� ���� = %d\n", tree.getCount());
	printf(" �縻�� ���� = %d\n", tree.getLeafCount());
	printf(" Ʈ���� ���� = %d\m", tree.getHeight());
	
}