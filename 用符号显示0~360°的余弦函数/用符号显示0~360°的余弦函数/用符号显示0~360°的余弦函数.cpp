#include<iostream>
#include<math.h>
int main() {
	double y;                                  //余弦函数y值。
	int x, m;                                 //定义的x值为计数项，m为弧度值。
	for (y = 1; y >= -1; y -= 0.1) {           //y值变化步数为0.1。
		m = acos(y) * 10; printf("%d\n", m);                      //根据y值计算出其弧度m，并乘以10以扩大。
		for (x = 1; x < m; x++)                //用连续相邻的两个m值的差表示两个*的水平距离。空格累计总数即为m差值。
			printf(" ");
		printf("*");
		for (; x < 62 - m; x++)                //打印右半侧对称
			printf(" ");
		printf("*\n");                         //左右两侧对称的*号打完之后换行
	}
	system("pause>0");
	return 0;
}
