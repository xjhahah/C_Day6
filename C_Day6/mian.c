#include <stdio.h>

//1.写一个函数返回参数二进制中 1 的个数 
int count_one_bits(unsigned int value)
{
	int count = 0;
	//暴力求解
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
	//最好的解法,这个解法只用循环value中有几个一就循环几次
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
	printf("请输入你要查询的数：");
	scanf_s("%d", &n);
	printf("该数中比特位有 %d 个是 1\n",count_one_bits(n));

	return 0;
}
  