// QGHomeWork_Week4_AnXiang.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Main.h"

#include "qgsort.h"

using namespace std;
//void deButTest(void(*fun)(int*, int)) {
//	模拟序列 
//	int arry1[1] = { 6 };
//	int arry2[2] = { 9,8 };
//	int arry3[3] = { 12,11,10 };
//	int arry8[8] = { 8,8,5,5,3,3,3,1 };
//	int arry20[20] = { 19,15,16,17,5,
//		18,3,10,6,7,
//		8,0,1,9,11,
//		2,13,4,14,12 };
//	int arry21[21] = { -19,13,2,17,5,
//		18,3,0,9,7,
//		8,20,1,6,11,
//		16,15,4,14,12,-10 };
//	//模拟序列 
//	int *arry1 = (int*)malloc(sizeof(int) * 1);
//	int *arry2 = (int*)malloc(sizeof(int) * 2);
//	int *arry3 = (int*)malloc(sizeof(int) * 3);
//	int *arry8 = (int*)malloc(sizeof(int) * 8);
//	int *arry20 = (int*)malloc(sizeof(int) * 20);
//	int *arry21 = (int*)malloc(sizeof(int) * 21);
//	arry1[0] = 1;
//	arry2[0] = 1;
//	arry2[1] = 0;
//	arry3[0] = 2;
//	arry3[1] = 1;
//	arry3[2] = 0;
//	arry8[0] = 7;
//	arry8[1] = 7;
//	arry8[2] = 5;
//	arry8[3] = 5;
//	arry8[4] = 3;
//	arry8[5] = 3;
//	arry8[6] = 3;
//	arry8[7] = 1;
//	for (int i = 0; i < 20; i++) {
//		arry20[i] = 20 - i - 1;
//	}
//	for (int i = 0; i < 21; i++) {
//		arry21[i] = 21 - i - 1;
//	}
//
//	进行排序	
//	printf("---------------------------------------------------------------\n");
//	fun(arry1, 1);
//	printf("---------------------------------------------------------------\n");
//	fun(arry2, 2);
//	printf("---------------------------------------------------------------\n");
//	fun(arry3, 3);
//	printf("---------------------------------------------------------------\n");
//	fun(arry8, 8);
//	printf("---------------------------------------------------------------\n");
//	fun(arry20, 20);
//	printf("---------------------------------------------------------------\n");
//	fun(arry21, 21);
//
//	检查结果
//	printf("arry1:\n%d\n", arry1[0]);
//	printf("arry2:\n%d %d\n", arry2[0], arry2[1]);
//	printf("arry3:\n%d %d %d\n", arry3[0], arry3[1], arry3[2]);
//	printf("arry8:\n");
//	for (int i = 0; i<8; i++) {
//		printf("%d\t", arry8[i]);
//	}
//	printf("\n");
//	printf("arry20:\n");
//	for (int i = 0; i<20; i++) {
//		printf("%d\t", arry20[i]);
//
//	}
//	printf("\n");
//	printf("arry21:\n");
//	for (int i = 0; i<21; i++) {
//		printf("%d\t", arry21[i]);
//
//	}
//	printf("\n");
//
//
//}
//void deButTest2(void(*fun)(int**, int)) {
//	////模拟序列 
//	//int arry1[1] = { 6 };
//	//int arry2[2] = { 9,8 };
//	//int arry3[3] = { 12,11,10 };
//	//int arry8[8] = { 8,8,5,5,3,3,3,1 };
//	//int arry20[20] = { 19,15,16,17,5,
//	//	18,3,10,6,7,
//	//	8,0,1,9,11,
//	//	2,13,4,14,12 };
//	//int arry21[21] = { 19,13,2,17,5,
//	//	18,3,0,9,7,
//	//	8,20,1,6,11,
//	//	16,15,4,14,12,10 };
//	//模拟序列 
//	int *arry1 = (int*)malloc(sizeof(int) * 1);
//	int *arry2 = (int*)malloc(sizeof(int) * 2);
//	int *arry3 = (int*)malloc(sizeof(int) * 3);
//	int *arry8 = (int*)malloc(sizeof(int) * 8);
//	int *arry20 = (int*)malloc(sizeof(int) * 20);
//	int *arry21 = (int*)malloc(sizeof(int) * 21);
//	arry1[0] = 0;
//
//	arry2[0] = 2;
//	arry2[1] = 1;
//
//	arry3[0] = 1;
//	arry3[1] = 0;
//	arry3[2] = 2;
//
//	arry8[0] = -17;
//	arry8[1] = 7;
//	arry8[2] = -10000;
//	arry8[3] = 10000;
//	arry8[4] = 3;
//	arry8[5] = 5;
//	arry8[6] = 3;
//	arry8[7] = 11;
//	for (int i = 0; i < 20; i++) {
//		arry20[i] =20-i-1;
//	}
//	for (int i = 0; i < 21; i++) {
//		arry21[i] = 21-i-1;
//	}
//
//	arry20[19] = 1000;
//	arry20[1] = -10000;
//	//进行排序	
//	printf("---------------------------------------------------------------\n");
//	fun(&arry1, 1);
//	//CountSort(&arry1, 1,0,0);
//	printf("---------------------------------------------------------------\n");
//	//CountSort(&arry2, 2, 1, 2);
//	fun(&arry2, 2);
//	printf("---------------------------------------------------------------\n");
//	//CountSort(&arry3, 3, -2, 0);
//	fun(&arry3, 3);
//	printf("---------------------------------------------------------------\n");
//	//CountSort(&arry8, 8, 2, 17);
//	fun(&arry8, 8);
//	printf("---------------------------------------------------------------\n");
//	fun(&arry20, 20);
//	//CountSort(&arry20, 20, 0, 2048);
//	printf("---------------------------------------------------------------\n");
//	fun(&arry21, 21);
//	printf("---------------------------------------------------------------\n");
//	//CountSort(&arry21, 21, 0, 20);
//	//检查结果
//	printf("arry1:\n%d\n", arry1[0]);
//	printf("arry2:\n%d %d\n", arry2[0], arry2[1]);
//	printf("arry3:\n%d %d %d\n", arry3[0], arry3[1], arry3[2]);
//	printf("arry8:\n");
//	for (int i = 0; i<8; i++) {
//		printf("%d\t", arry8[i]);
//	}
//	printf("\n");
//	printf("arry20:\n");
//	for (int i = 0; i<20; i++) {
//		printf("%d\t", arry20[i]);
//
//	}
//	printf("\n");
//	printf("arry21:\n");
//	for (int i = 0; i<21; i++) {
//		printf("%d\t", arry21[i]);
//
//	}
//	printf("\n");
//	free(arry1);
//	free(arry2);
//	free(arry3);
//	free(arry8);
//	free(arry20);
//	free(arry21);
//
//}
int main()
{


	rArry1w = nullptr;
	rArry5w = nullptr;
	rArry20w = nullptr;
	while (getCode());

	cout << "测试结束 " << endl;
	system("pause");
    return 0;
}
int tryGetNum(const char * str)
{
	int num = 0;
	bool flag = false;

	while (true)
	{
		cout << str << endl;
		char str[16] = { 0 };
		cin >> str;


		for (num = 0, flag = false; str[num] != '\n'&&str[num] != '\0'; num++) {
			if ((str[num] - '0' > 9 || str[num] - '0' <0) && (num != 0 || str[num] != '-')) {
				flag = true;
				break;
			}
		}
		if (str[0] == '-'&&num == 1) {
			flag = true;
		}
		if (flag) {
			cout << "\n----错误，请重输！！----\n" << endl;
			continue;
		}
		bool isnagNum = false;
		if (str[0] == '-') {
			isnagNum = true;
		}
		int iNum = 0;
		int bit = 1;
		if (isnagNum) {
			for (int i = num - 1; i > 0; i--) {
				iNum += (str[i] - '0')*bit;
				bit *= 10;
			}
			iNum *= -1;
		}
		else
		{
			for (int i = num - 1; i >= 0; i--) {
				iNum += (str[i] - '0')*bit;
				bit *= 10;
			}
		}
		return iNum;
	}
}

int tryGetNum(const char * str, int min, int max)
{
	int num = 0;
	bool flag = false;

	while (true)
	{
		cout << str << endl;
		char str[16] = { 0 };
		cin >> str;


		for (num = 0, flag = false; str[num] != '\n'&&str[num] != '\0'; num++) {
			if ((str[num] - '0' > 9 || str[num] - '0' <0) && (num != 0 || str[num] != '-')) {
				flag = true;
				break;
			}
		}
		if (str[0] == '-'&&num == 1) {
			flag = true;
		}
		if (flag) {
			cout << "\n----错误，请重输！！----\n" << endl;
			continue;
		}
		bool isnagNum = false;
		if (str[0] == '-') {
			isnagNum = true;
		}
		int iNum = 0;
		int bit = 1;
		if (isnagNum) {
			for (int i = num - 1; i > 0; i--) {
				iNum += (str[i] - '0')*bit;
				bit *= 10;
			}
			iNum *= -1;
			if (iNum >= min && iNum <= max) {
				return iNum;
			}
		}
		else
		{
			for (int i = num - 1; i >= 0; i--) {
				iNum += (str[i] - '0')*bit;
				bit *= 10;
			}
			if (iNum >= min && iNum <= max) {
				return iNum;
			}
		}
		cout << "\n----错误，请重输！！----\n" << endl;
	}
}

int tryGetNum(const char * str, int min)
{
	int num = 0;
	bool flag = false;

	while (true)
	{
		cout << str << endl;
		char str[16] = { 0 };
		cin >> str;


		for (num = 0, flag = false; str[num] != '\n'&&str[num] != '\0'; num++) {
			if ((str[num] - '0' > 9 || str[num] - '0' <0) && (num != 0 || str[num] != '-')) {
				flag = true;
				break;
			}
		}
		if (str[0] == '-'&&num == 1) {
			flag = true;
		}
		if (flag) {
			cout << "\n----错误，请重输！！----\n" << endl;
			continue;
		}
		bool isnagNum = false;
		if (str[0] == '-') {
			isnagNum = true;
		}
		int iNum = 0;
		int bit = 1;
		if (isnagNum) {
			for (int i = num - 1; i > 0; i--) {
				iNum += (str[i] - '0')*bit;
				bit *= 10;
			}
			iNum *= -1;
			if (iNum >= min) {
				return iNum;
			}
		}
		else
		{

			for (int i = num - 1; i >= 0; i--) {
				iNum += (str[i] - '0')*bit;
				bit *= 10;
			}
			if (iNum >= min) {
				return iNum;
			}
		}
		cout << "\n----错误，请重输！！----\n" << endl;
	}
}

int * getRandArry(int length)
{
	int *rArry = (int*)malloc(sizeof(int)*length);
	if (!rArry) {
		cout << "error:无法获取" << length << "长度的整形数组堆空间!!!\n" << endl;
		return nullptr;
	}
	srand((int)time(0));
	for (int i = 0; i < length; i++) {
		rArry[i] = rand();
	}
	return rArry;
}

bool setRandArry()
{
	rArry1w = getRandArry(oW);
	rArry5w = getRandArry(fW);
	rArry20w = getRandArry(twW);
	if (rArry1w&&rArry5w&&rArry20w) {
		return true;
	}
	return false;
}

void reSetRandArry()
{
	if (rArry1w) {
		free(rArry1w);
		rArry1w = nullptr;
	}
	if (rArry5w) {

		free(rArry5w);
		rArry5w = nullptr;
	}
	if (rArry20w) {
		free(rArry20w);
		rArry20w = nullptr;
	}
}

void checkArry(int * arry, int length)
{
	for (int i = 1; i < length; i++) {
		if (arry[i - 1] > arry[i]) {
			cout << length/oW<<"w数据量，数组排序有误！！！\n" <<"位置："<<i-1<<"  "<<i<<"\n"<<arry[i-1]<<">"<<arry[i]<<"\n"<<endl;
			return;
		}
	}
	cout << length/oW<<"w数据量，数组排序正确！！！\n" << endl;


}

void icheckArry(int * arry, int length)
{
	for (int i = 1; i < length; i++) {
		if (arry[i - 1] > arry[i]) {
			cout << length<< "数据量，数组排序有误！！！\n" << "位置：" << i - 1 << "  " << i << "\n" << arry[i - 1] << ">" << arry[i] << "\n" << endl;
			return;
		}
	}
	cout << length<< "数据量，数组排序正确！！！\n" << endl;
}

bool getCode()
{
	char str[16] = { 0 };
	cout << "\n请输入命令：(allcode 察看所有可用命令)" << endl;
	cin >> str;
	if (strcmp(str, "allcode") == 0) {
		cout << "\n-----全部命令如下-----\n" << endl;
		cout << "rcheckbsort---------使用 rand() 生成 1w 5w 20w随机数组，检查冒泡排序" << endl;
		cout << "rcheckisort---------使用 rand() 生成 1w 5w 20w随机数组，检查插入排序" << endl;
		cout << "rcheckssort---------使用 rand() 生成 1w 5w 20w随机数组，检查单向选则排序" << endl;
		cout << "rcheckdssort--------使用 rand() 生成 1w 5w 20w随机数组，检查双向选则排序" << endl;
		cout << "rcheckmsort---------使用 rand() 生成 1w 5w 20w随机数组，检查归并排序" << endl;
		cout << "rcheckshellsort-----使用 rand() 生成 1w 5w 20w随机数组，检查希尔排序" << endl;
		cout << "rcheckloopqsort-----使用 rand() 生成 1w 5w 20w随机数组，检查循环实现的快速排序" << endl;
		cout << "rcheckqsort---------使用 rand() 生成 1w 5w 20w随机数组，检查递归实现的快速排序" << endl;
		cout << "rcheckcsort---------使用 rand() 生成 1w 5w 20w随机数组，检查计数排序" << endl;
		cout << "rcheckrcsort--------使用 rand() 生成 1w 5w 20w随机数组，检查基数排序" << endl;
		cout << "inputchecksort------自行输入一个自定义长度的数组，并选则一种排序" << endl;
		cout << "colorsort-----------自行输入一个只含0 1 2的数组，并进行排序" << endl;
		cout << "kfindsort-----------自行输入一个数组，选则大小方向，查找第k个数据" << endl;
		cout << "end-----------------结束测试" << endl;
		cout << "cls-----------------清屏" << endl;
		cout << "\n----------------------" << endl;
		return true;
	}
	else if (strcmp(str, "rcheckbsort") == 0) {
		if (setRandArry()) {
			cout << "\n开始冒泡排序：\n" << endl;

			auto start = clock();
			BubbleSort(rArry1w, oW);
			cout << "1w数据量耗时：" << clock() - start <<"ms"<< endl;
			checkArry(rArry1w, oW);

			start = clock();
			BubbleSort(rArry5w, fW);
			cout << "5w数据量耗时：" << clock() - start <<"ms" <<endl;
			checkArry(rArry5w, fW);

			start = clock();
			BubbleSort(rArry20w, twW);
			cout << "20w数据量耗时：" << clock() - start <<"ms" <<endl;
			checkArry(rArry20w, twW);

			reSetRandArry();
			return true;

		}
	}
	else if (strcmp(str, "rcheckisort") == 0) {
		if (setRandArry()) {
			cout << "\n开始插入排序：\n" << endl;

			auto start = clock();
			InsertionSort(rArry1w, oW);
			cout << "1w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry1w, oW);

			start = clock();
			InsertionSort(rArry5w, fW);
			cout << "5w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry5w, fW);

			start = clock();
			InsertionSort(rArry20w, twW);
			cout << "20w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry20w, twW);

			reSetRandArry();
			return true;

		}
	}
	else if (strcmp(str, "rcheckssort") == 0) {
		if (setRandArry()) {
			cout << "\n开始单向选则排序：\n" << endl;

			auto start = clock();
			SelectionSort(rArry1w, oW);
			cout << "1w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry1w, oW);

			start = clock();
			SelectionSort(rArry5w, fW);
			cout << "5w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry5w, fW);

			start = clock();
			SelectionSort(rArry20w, twW);
			cout << "20w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry20w, twW);

			reSetRandArry();
			return true;

		}
	}
	else if (strcmp(str, "rcheckdssort") == 0) {
		if (setRandArry()) {
			cout << "\n开始双向选则排序：\n" << endl;

			auto start = clock();
			DoubleSelectionSort(rArry1w, oW);
			cout << "1w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry1w, oW);

			start = clock();
			DoubleSelectionSort(rArry5w, fW);
			cout << "5w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry5w, fW);

			start = clock();
			DoubleSelectionSort(rArry20w, twW);
			cout << "20w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry20w, twW);

			reSetRandArry();
			return true;

		}
	}
	else if (strcmp(str, "rcheckmsort") == 0) {
		if (setRandArry()) {
			cout << "\n开始归并排序：\n" << endl;

			auto start = clock();
			MargeSort(rArry1w, oW);
			cout << "1w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry1w, oW);

			start = clock();
			MargeSort(rArry5w, fW);
			cout << "5w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry5w, fW);

			start = clock();
			MargeSort(rArry20w, twW);
			cout << "20w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry20w, twW);

			reSetRandArry();
			return true;

		}
	}
	else if (strcmp(str, "rcheckshellsort") == 0) {
		if (setRandArry()) {
			cout << "\n开始希尔排序：\n" << endl;

			auto start = clock();
			ShellSort(rArry1w, oW);
			cout << "1w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry1w, oW);

			start = clock();
			ShellSort(rArry5w, fW);
			cout << "5w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry5w, fW);

			start = clock();
			ShellSort(rArry20w, twW);
			cout << "20w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry20w, twW);

			reSetRandArry();
			return true;

		}
	}
	else if (strcmp(str, "rcheckloopqsort") == 0) {
		if (setRandArry()) {
			cout << "\n开始循环实现的快速排序：\n" << endl;

			auto start = clock();
			QuickSort(rArry1w, oW);
			cout << "1w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry1w, oW);

			start = clock();
			QuickSort(rArry5w, fW);
			cout << "5w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry5w, fW);

			start = clock();
			QuickSort(rArry20w, twW);
			cout << "20w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry20w, twW);

			reSetRandArry();
			return true;

		}
	}
	else if (strcmp(str, "rcheckqsort") == 0) {
		if (setRandArry()) {
			cout << "\n开始递归实现的快速排序：\n" << endl;

			auto start = clock();
			QuickSort_Recursion(rArry1w, oW);
			cout << "1w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry1w, oW);

			start = clock();
			QuickSort_Recursion(rArry5w, fW);
			cout << "5w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry5w, fW);

			start = clock();
			QuickSort_Recursion(rArry20w, twW);
			cout << "20w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry20w, twW);

			reSetRandArry();
			return true;

		}
	}
	else if (strcmp(str, "rcheckcsort") == 0) {
		if (setRandArry()) {
			cout << "\n开始计数排序：\n" << endl;

			auto start = clock();
			CountSort(&rArry1w,oW, 0,RAND_MAX);
			cout << "1w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry1w, oW);

			start = clock();
			CountSort(&rArry5w, fW, 0, RAND_MAX);
			cout << "5w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry5w, fW);

			start = clock();
			CountSort(&rArry20w, twW, 0, RAND_MAX);
			cout << "20w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry20w, twW);

			reSetRandArry();
			return true;

		}
	}
	else if (strcmp(str, "rcheckrcsort") == 0) {
		if (setRandArry()) {
			cout << "\n开始基数排序：\n" << endl;

			auto start = clock();
			RadixCountSort(&rArry1w, oW);
			cout << "1w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry1w, oW);

			start = clock();
			RadixCountSort(&rArry5w, fW);
			cout << "5w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry5w, fW);

			start = clock();
			RadixCountSort(&rArry20w, twW);
			cout << "20w数据量耗时：" << clock() - start << "ms" << endl;
			checkArry(rArry20w, twW);

			reSetRandArry();
			return true;

		}
	}
	else if (strcmp(str, "inputchecksort") == 0) {
		int length = tryGetNum("\n请输入数组长度：", 1);
		int *iarry = (int*)malloc(sizeof(int)*length);
		if (!iarry) {
			cout << "error:无法获取" << length << "长度的整形数组堆空间!!!\n" << endl;
			return true;
		}

		int min = 0;
		int max = 0;

		char str[64] = { 0 };
		for (int i = 0; i < length; i++) {
			sprintf_s(str, "\n请输入第%d个数据：", i+1);
			iarry[i] = tryGetNum(str);
			if (i == 0) {
				min = iarry[i];
				max = iarry[i];
			}
			else
			{
				if (iarry[i] > max) {
					max = iarry[i];
				}
				if (iarry[i] < min) {
					min = iarry[i];
				}
			}
		}
		
	  cout << "\n0---------冒泡排序" << endl;
		cout << "1---------插入排序" << endl;
		cout << "2---------单向选则排序" << endl;
		cout << "3---------双向选则排序" << endl;
		cout << "4---------归并排序" << endl;
		cout << "5---------希尔排序" << endl;
		cout << "6---------循环实现的快速排序" << endl;
		cout << "7---------递归实现的快速排序" << endl;
		cout << "8---------计数排序" << endl;
		cout << "9---------基数排序\n-------------------------------\n" << endl;



		int type = tryGetNum("\n请选则一种排序", 0, 9);
		switch (type)
		{
		case 0:
			BubbleSort(iarry,length);
			break;
		case 1:
			InsertionSort(iarry, length);
			break;
		case 2:
			SelectionSort(iarry, length);
			break;
		case 3:
			DoubleSelectionSort(iarry, length);
			break;
		case 4:
			MargeSort(iarry, length);
			break;
		case 5:
			ShellSort(iarry, length);
			break;
		case 6:
			QuickSort(iarry, length);
			break;
		case 7:
			QuickSort_Recursion(iarry, length);
			break;
		case 8:
			CountSort(&iarry, length, min, max);
			break;
		case 9:
			RadixCountSort(&iarry, length);
			break;
		default:
			break;
		}
		cout << "\n程序检查结果：" << endl;
		icheckArry(iarry, length);

		cout << "\n排序结果：" << endl;
		for (int i = 0; i < length; i++) {
			cout << iarry[i] << '\t';
		}
		cout << "\n" << endl;

		free(iarry);
		return true;
	}
	else if (strcmp(str, "colorsort") == 0) {
		int length = tryGetNum("\n请输入数组长度：", 1);
		int *iarry = (int*)malloc(sizeof(int)*length);
		if (!iarry) {
			cout << "error:无法获取" << length << "长度的整形数组堆空间!!!\n" << endl;
			return true;
		}
		char str[64] = { 0 };
		for (int i = 0; i < length; i++) {
			sprintf_s(str, "\n请输入第%d个数据", i + 1);
			iarry[i] = tryGetNum(str, 0, 2);
		}

		ColorSort(iarry, length);

		cout << "\n程序检查结果：" << endl;
		icheckArry(iarry, length);

		cout << "\n排序结果：" << endl;
		for (int i = 0; i < length; i++) {
			cout << iarry[i] << '\t';
		}
		cout << "\n" << endl;

		free(iarry);


		return true;
	}
	else if (strcmp(str, "kfindsort") == 0) {
		int length = tryGetNum("\n请输入数组长度：", 1);
		int *iarry = (int*)malloc(sizeof(int)*length);
		if (!iarry) {
			cout << "error:无法获取" << length << "长度的整形数组堆空间!!!\n" << endl;
			return true;
		}
		char str[64] = { 0 };
		for (int i = 0; i < length; i++) {
			sprintf_s(str, "\n请输入第%d个数据", i + 1);
			iarry[i] = tryGetNum(str);
		}

		

		while (true)
		{
			int type = tryGetNum("\n请选则：0.从大到小 1.从小到大 -1.退出", -1, 1);
			if (type == -1) {
				break;
			}


			int k = tryGetNum("\n请选则要查找的数据", 1, length);
			

			if (type == 0) {
				cout << "从大到小，第" << k << "个数据是：" << kFindSort(iarry, length, k, false)<<endl;
			}
			else
			{
				cout << "从小到大，第" << k << "个数据是：" << kFindSort(iarry, length, k, true)<<endl;
			}

		}
		

		free(iarry);


		return true;
	}
	else if (strcmp(str, "end") == 0) {
		return false;
	}
	else if (strcmp(str, "cls") == 0) {
		system("cls");
		return true;
	}
	else
	{
		cout << "\n命令无法解析,请重输" << endl;
		return true;
	}
}




