#include <iostream>
#include <climits>
using namespace std;

int main(){
	printf("���������ݵ�������");
	int n;
	cin >> n;
	int a[20];
	for (int i = 0;i < n;i++) {
		int x;
		printf("�������%d����:", i + 1);
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
	}//start�ǿ�ʼ���꣬end�ǽ�������
	int num = end - start + 1;//�����������num������
	int c = start;
	printf("��(");
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
	printf(")ʱ������Ӷκ�Ϊ%d",sum);
	return 0;
}