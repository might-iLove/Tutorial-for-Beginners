//#include<iostream> //������̳еĻ���ʹ�÷���
//
//class Entity
//{
//public:
//	float X, Y;
//
//	void Move(float xa, float ya)
//	{
//		X += xa;
//		Y += ya;
//	}
//};
//
//class Player : public Entity //�������ӵ�����е������ݣ�����Ҫ���������븸���ظ�������
//{
//public:
//	const char* Name;
//
//	void PrintName()
//	{
//		std::cout << Name << std::endl;
//	}
//
//	void PrintNumber()
//	{
//		std::cout << "X: " << X << "\nY: " << Y << std::endl;
//	}
//};
//
//int main()
//{
//	std::cout << "Entity�����ڴ������ֽ���Ϊ " << sizeof(Entity) << std::endl;
//	std::cout << "Player�����ڴ������ֽ���Ϊ " << sizeof(Player) << std::endl;
//	Player player; //���ø�������������еĺ���(����)�ͱ���(����)
//	player.Move(4, 5);
//	player.X = 2;
//	player.Y = 1;
//	player.PrintNumber();
//
//	std::cin.get();
//	return 0;
//}