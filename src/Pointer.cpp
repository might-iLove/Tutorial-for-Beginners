//#include<iostream> //��ָ�롢˫ָ�롢���õ�ʹ��˵��
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
//	char** ptr = &buffer; //ptr��ָ��洢��buffer�ڴ��ַ��ָ�� --> buffer��ָ��char���͵��ַ������ָ�룬�洢���ַ�����ֵ���ڵ��ڴ��ַ
//
//	delete[] buffer;
//
//
//	int a = 5 ,b = 6;
//	int& ref = a;
//	ref = b;//ͨ�����ö�a��ֵ�����޸�(ֱ���޸��ڴ��ַ���������ֵ)
//	//increment(a); //ʹ�����ã�ͨ�����ú���ֱ�Ӷ��ڴ��ַ�ϵ�ֵ�����޸�
//	//Increment(&a);
//	std::cout << "a��ֵΪ��" << a << std::endl;
//	std::cin.get();
//}