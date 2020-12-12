//#include<iostream> //字符串的使用方法讲解
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	string phrase = "Tutorial for Beginners";
//	phrase[0] = 'B'; // 通过下标index更改字符串中具体某个位置上的元素
//	cout << "phrase的长度为： " << phrase.length() << endl; // 直接用变量名.调用函数 --> 确定字符串的长度
//	cout << "phrase中第四个位置的元素为： " << phrase[3] << endl; // 变量名即指针、数组，值为内存地址 --> 可作为数组使用，即可通过索引(index)访问字符串中的某个元素
//	cout << "phrase中第一位元素到指定元素之间的个数为： " << phrase.find("for", 0) << endl; // find函数 --> 从第一个元素开始计数，直到指定“for”的第几位结束 --> return这之间的元素个数
//	cout << "从phrase中指定位置的后一位开始，往后抽取出n为元素，其值为： " << phrase.substr(8, 4); // substr()函数 --> 从字符串指定位置的后一位元素开始，往后抽取n位元素，构造成一个新的字符串
//	cin.get();
//	return 0;
//}