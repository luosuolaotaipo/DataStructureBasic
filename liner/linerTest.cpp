// liner.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "MyList.cpp"
#include "myLinkList.cpp"
using namespace std;
int main()
{
	/*
	MyList<int> C1;
	cout << C1.GetLength()<< C1.GetSize() << endl;
   C1.InsertAt(0, 2);
   cout << C1.GetElement(0);
   cout << C1.GetLength() << endl;
   for (int i = 1; i < 15; i++) {
	   C1.InsertAt(i, i+i);
   }
   cout << C1.GetElement(7);
   cout << C1.GetSize()<<endl;
   */
   MyLinkList<int>c2 =  MyLinkList<int>(66);
   cout << c2.GetLength() << endl;
   c2.InsertAt(1, 2);
   //c2.GetElement(0).printVal();
   cout << c2.GetLength() << endl;
   for (int i = 1; i < 15; i++) {
	   c2.InsertAt(i, i + i);
	   cout <<i<< endl;
	   c2.GetElement(i)->printVal();
   }
   c2.GetElement(14)->printVal();
	  c2.GetElement(15)->printVal();

   cout << c2.GetLength() << endl;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
