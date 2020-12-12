//#include<iostream> //虚函数的讲解
//#include<string>
////虚函数的功能：促进所谓的动态传播，通过在运行时映射Player类中的GetName()函数来正确地覆盖Entity类中的GetName()函数 --> 因为子类与父类中的函数同名，在类外通过其他函数调用GetName()函数，会首先在父类Entity中查找GetName函数 , 这就是虚函数发挥作用的地方
//
//class Entity
//{
//public:
//	virtual std::string GetName() //函数调用，即会被在V表中映射 --> 实体指针对象会在V表中查找已映射映射的函数,将其覆盖
//	{
//		return "Entity";
//	}
//};
//
//class Player : public Entity
//{
//private:
//	std::string m_Name;
//
//public:
//	Player(const std::string& name) : m_Name(name) //映射赋值，将传入的引用常量赋给私有变量(属性)
//	{}
//
//	std::string GetName() override
//	{
//		return m_Name;
//	}
//};
//
//void PrintName(Entity* entity) //获取实体类型的指针
//{
//	std::cout << entity->GetName() << std::endl;
//}
//
//int main()
//{
//	Entity* e = new Entity();
//	PrintName(e); //使用指针对象调用该类中的方法时，需用箭头运算符
//
//	Player* p = new Player("chen yu peng"); //对Player类实例化指针对象时，同时进行参数的传递 --> 也就是说，实例化指针对象的同时，调用与类同名的构造方法，给私有变量赋值
//	PrintName(p);
//
//	Player* entity = p;
//	PrintName(entity);
//
//	std::cin.get();
//	return 0;
//}