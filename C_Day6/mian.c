#include <stdio.h>

//1.дһ���������ز����������� 1 �ĸ��� 
int count_one_bits(unsigned int value)
{
	int count = 0;
	//�������
	/*
	int num = 1;
	while (num)
	{
		if (num & value)
		{
			count++;
		}		
		num = num << 1;
	}
	*/
	//��õĽⷨ,����ֻⷨ��ѭ��value���м���һ��ѭ������
	while (value)
	{
		++count;
		value = (value - 1)&value;
	}
	return count;
}
int main()
{
	size_t n = 0;
	printf("��������Ҫ��ѯ������");
	scanf_s("%d", &n);
	printf("�����б���λ�� %d ���� 1\n",count_one_bits(n));

	return 0;
}
  