//#include<iostream> //讲解类继承的基本使用方法
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
//class Player : public Entity //子类仅需拥有所有的新内容，绝对要消除所有与父类重复的内容
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
//	std::cout << "Entity类中内存所在字节数为 " << sizeof(Entity) << std::endl;
//	std::cout << "Player类中内存所在字节数为 " << sizeof(Player) << std::endl;
//	Player player; //调用父类和子类中所有的函数(方法)和变量(属性)
//	player.Move(4, 5);
//	player.X = 2;
//	player.Y = 1;
//	player.PrintNumber();
//
//	std::cin.get();
//	return 0;
//}