#include <stdio.h>


//1.дһ���������ز����������� 1 �ĸ��� 
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	//�������
//	/*
//	int num = 1;
//	while (num)
//	{
//		if (num & value)
//		{
//			count++;
//		}		
//		num = num << 1;
//	}
//	*/
//	//��õĽⷨ,����ֻⷨ��ѭ��value���м���һ��ѭ������
//	while (value)
//	{
//		++count;
//		value = (value - 1)&value;
//	}
//	return count;
//}


//2.��ȡһ�������������������е�ż��λ������λ���ֱ�������������С� 

//void Test2(int n)
//{
//	printf("����λֵΪ��");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//
//	printf("ż��λֵΪ��");
//	for (int i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ",(n >> i)&1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	size_t n = 0;
//	printf("��������Ҫ��ѯ������");
//	scanf_s("%d", &n);
//	//printf("�����б���λ�� %d ���� 1\n",count_one_bits(n));
//
//	Test2(n);
//
//	//����
//	int i = 0, j = 0;
//	char arr1[16];  //����2����������Ŷ���������
//	char arr2[16];
//	int num = 0;
//	printf("��������Ҫ��ѯ������");
//	scanf_s("%d", &num);
//	for (i = 0; i < 32; i += 2)
//	{
//		arr1[j] = ((num >> i) & 1);  //����λ
//		j++;
//	}
//	for (i = 1, j = 0; i < 32; i += 2)
//	{
//		arr2[j] = ((num >> i) & 1);  //ż��λ
//		j++;
//	}
//	printf("����λΪ��");  //���������Ķ�������������
//	for (i = 0; i <= 15; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("ż��λΪ��");  //���������Ķ�����ż������
//	for (i = 0; i <= 15; i++)
//	{ 
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//  

//���һ��������ÿһλ��
int main()
{
	int num= 0;
	int i = 1;
	printf("��������Ҫ��ѯ������");
	scanf_s("%d", &num);
	while (i <= 32)
	{
		printf("%d ", (num >> i) & 1);
		i++;
	}
	return 0;
}