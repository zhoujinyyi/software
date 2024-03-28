#include <iostream>
#include <climits>
using namespace std;

int main(){
	printf("请输入数据的数量：");
	int n;
	cin >> n;
	int a[20];
	for (int i = 0;i < n;i++) {
		int x;
		printf("请输入第%d个数:", i + 1);
		cin >> x;
		a[i] = x;
	}
	int sum = -INT_MAX;
	int count;
	int start = 0;
	int end = 0;
	for (int i = 0;i < n;++i)
	{
		count = 0;
		for (int j = i;j < n;++j)
		{
			count += a[j];
			if (count > sum) {
				sum = count;
				end = j;
				start = i;
			}
		}
	}//start是开始坐标，end是结束坐标
	int num = end - start + 1;//最大子数组有num个数字
	int c = start;
	printf("当(");
	for (int i =0;i <num;i++) {
		if (start == end) {
			printf("a[%d]", start);
		}
		else {
			printf("a[%d],", start);
		}
		start++;
	}
	printf(")");
	printf("=");
	printf("(");
	for (int i = 0;i < num;i++) {
		if (c== end) {
			printf("%d",a[c]);
		}
		else {
			printf("%d,",a[c]);
		}
		c++;
	}
	printf(")时，最大子段和为%d",sum);
	return 0;
}