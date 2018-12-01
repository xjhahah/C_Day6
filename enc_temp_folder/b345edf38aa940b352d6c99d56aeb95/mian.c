#include <stdio.h>


//1.写一个函数返回参数二进制中 1 的个数 
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	//暴力求解
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
//	//最好的解法,这个解法只用循环value中有几个一就循环几次
//	while (value)
//	{
//		++count;
//		value = (value - 1)&value;
//	}
//	return count;
//}


//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。 

void Test2(int n)
{
	printf("奇数位值为：");
	for (int i = 0; i <= 30; i += 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");

	printf("偶数位值为：");
	for (int i = 0; i <= 31; i += 2)
	{
		printf("%d ",(n>>i)&1);
	}
	printf("\n");
}

int main()
{
	size_t n = 0;
	printf("请输入你要查询的数：");
	scanf_s("%d", &n);
	//printf("该数中比特位有 %d 个是 1\n",count_one_bits(n));

	Test2(n);
	return 0;
}
  