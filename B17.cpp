#include <stdio.h>�@

#include <stdlib.h> 

int main(int argc, char *argv[]) {

	int a[5]={0};

	int i=0, m;
	printf("��M�}�C���̤p�Ȫ��{��\n");

	printf("�гs���J���ӼƭȡG\n");

	for(i=0;i<5;i++)

	{

	   printf("��%d����ơG", i+1 );

	   scanf("%d", &a[i]);

	}

	m=a[0];

	for(i=0;i<5;i++)

	{

	  if (m>a[i])	

	  {

		  m=a[i];

	  }

	}

	printf("�̤p�ȬO�G%d\n\n",m); 

	system("PAUSE");	

	return 0;

}
