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

//void Test2(int n)
//{
//	printf("奇数位值为：");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//
//	printf("偶数位值为：");
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
//	printf("请输入你要查询的数：");
//	scanf_s("%d", &n);
//	//printf("该数中比特位有 %d 个是 1\n",count_one_bits(n));
//
//	Test2(n);
//
//	//法二
//	int i = 0, j = 0;
//	char arr1[16];  //定义2个数组来存放二进制序列
//	char arr2[16];
//	int num = 0;
//	printf("请输入你要查询的数：");
//	scanf_s("%d", &num);
//	for (i = 0; i < 32; i += 2)
//	{
//		arr1[j] = ((num >> i) & 1);  //奇数位
//		j++;
//	}
//	for (i = 1, j = 0; i < 32; i += 2)
//	{
//		arr2[j] = ((num >> i) & 1);  //偶数位
//		j++;
//	}
//	printf("奇数位为：");  //输出数组里的二进制奇数序列
//	for (i = 0; i <= 15; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("偶数位为：");  //输出数组里的二进制偶数序列
//	for (i = 0; i <= 15; i++)
//	{ 
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//  

//输出一个整数的每一位。
int main()
{
	int num= 0;
	int i = 1;
	printf("请输入你要查询的数：");
	scanf_s("%d", &num);
	while (i <= 32)
	{
		printf("%d ", (num >> i) & 1);
		i++;
	}
	return 0;
}