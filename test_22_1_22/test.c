#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	char ch = '0';
//	if (ch >= '0' && ch <= '9')
//	{
//		//...
//	}
//	if (isdigit(ch))
//	{
//		//...这样代码才更加统一
//	}
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	if (islower(ch))
//	{
//		ch = toupper(ch);
//	}
//	else
//	{
//		ch = tolower(ch);
//	}
//	printf("%c\n", ch);
//	return 0;
//}
// 
//#include<stdio.h>
//#include<ctype.h>
//#include<assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//    void* ret = dest;
//    assert(dest && src);
//    while (num--)
//    {
//        *(char*)dest = *(char*)src;//强制类型转换只是临时的，并不改变dest的类型
//        dest = (char*)dest + 1;;//void*不能直接++
//        src = (char*)src + 1;
//    }
//    return ret;
//}
//
//#include<stdio.h>
//#include<memory.h>
//#include<string.h>
//#include<assert.h>
//
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//    void* ret = dest;
//    assert(dest && src);
//
//    //从前向后拷贝
//    if (dest < src)
//    {
//        while (num--)
//        {
//            *(char*)dest = *(char*)src;
//            dest = (char*)dest + 1;
//            src = (char*)src + 1;
//        }
//    }
//
//    //从后向前拷贝
//    else
//    {
//        while (num--)//20就变成19
//        {
//            *((char*)dest + num) = *((char*)src + num);
//        }
//    }
//    return ret;
//}
//void test1()
//{
//    //将arr3中的12345拷贝放到34567中
//    int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int arr4[5] = { 0 };
//    my_memmove(arr3+2, arr3, 5 * sizeof(arr3[0]));
//    for (size_t i = 0; i < 10; i++)
//    {
//        printf("%d ", arr3[i]);//1 2 1 2 3 4 5 8 9 10
//    }
//}
//int main()
//{
//   
//    test1();
//    return 0;
//}

#include<stdio.h>
#include<memory.h>
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5 };
	int ret = memcmp(arr1, arr2, 8);
	printf("%d\n", ret);//0	前8个字节都相等返回0
	return 0;
}