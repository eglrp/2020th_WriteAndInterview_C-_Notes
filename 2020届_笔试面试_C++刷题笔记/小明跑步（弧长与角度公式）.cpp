#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

/*
小明同学喜欢体育锻炼，他常常去操场上跑步。跑道是一个圆形，在本题中，
我们认为跑道是一个半径为R的圆形，设圆心的坐标为原点(0,0)。
小明跑步的起点坐标为(R,0)，他沿着圆形跑道跑步，而且一直沿着一个方向跑步。
回到家后，他查看了自己的计步器，计步器显示他跑步的总路程为L。
小明想知道自己结束跑步时的坐标，但是他忘记自己是沿着顺时针方向还是逆时针方向跑的了。
他想知道在这两种情况下的答案分别是多少。

输入
输入两个整数L,R (1<=L,R<=100)。
输出
输出两行，每行两个数，用空格隔开。第一行的两个数为顺时针情况下结束位置的坐标，
第二行是逆时针情况下结束位置的坐标。所有数据小数点后四舍五入保留3位。

样例输入
1 2

样例输出
1.755 -0.959
1.755 0.959
*/

int main456416584164169849640252014(void)
{
	int L, R;
	while (cin >> L >> R)
	{
		double angle = (double)L / R;// 弧长L=圆心弧度绝对值|a| × 半径R

		// 顺时针
		printf("%.3f %.3f\n", R*cos(angle), -R * sin(angle));
		// 逆时针
		printf("%.3f %.3f\n", R*cos(angle), R*sin(angle));
	}

	cout<<"Write By JZQ!"<<endl;
	//自动排版：ctrl+k+F
	return 0;
}