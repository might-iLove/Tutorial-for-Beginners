//#include<iostream> //单指针、双指针、引用的使用说明
//#include<cstring>
//
//void Increment(int* value)
//{
//	(*value)++;
//}
//
//void increment(int& value)
//{
//	value++;
//}
//
//int main()
//{
//	char* buffer = new char[8];
//	memset(buffer, 0, 8);
//	char** ptr = &buffer; //ptr是指向存储着buffer内存地址的指针 --> buffer是指向char类型的字符数组的指针，存储着字符数组值所在的内存地址
//
//	delete[] buffer;
//
//
//	int a = 5 ,b = 6;
//	int& ref = a;
//	ref = b;//通过引用对a的值进行修改(直接修改内存地址中所储存的值)
//	//increment(a); //使用引用，通过调用函数直接对内存地址上的值进行修改
//	//Increment(&a);
//	std::cout << "a的值为：" << a << std::endl;
//	std::cin.get();
//}