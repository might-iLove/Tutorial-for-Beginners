#include<iostream> //接口的讲解 --> 接口即是纯虚函数
#include<string>

class Printable
{
public:
	virtual std::string GetClassName() = 0;//这是实际主体的基类(父类)所在的位置 --> 即带有实际主体的基类意味着将其覆盖在子类中
	//定义虚函数且等于0，本质上使其成为 纯虚函数 --> 不再能够实例化该实体类的对象 --> 必须使用实现该功能的一种子类
};

class Entity : public Printable
{
public:
	virtual std::string GetName() 
	{ 
		return "Entity"; 
	}
	std::string GetClassName() override
	{
		return "Entity";
	}
};

class Player : public Entity
{
private:
	std::string m_Name;

public:
	Player(const std::string& name) : m_Name(name) //映射赋值，将传入的引用常量赋给私有变量(属性)
	{}

	std::string GetName() override
	{
		return m_Name;
	}

	std::string GetClassName() override
	{
		return "Player";
	}
};

class A : public Printable
{
public:
	std::string GetClassName() override
	{
		return "A";
	}
};

void PrintName(Entity* entity) //获取实体类型的指针
{
	std::cout << entity->GetName() << std::endl;
}

void Print(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	//PrintName(e); 

	Player* p = new Player("chen yu peng"); 
	//PrintName(p);

	Print(e);
	Print(p);
	Print(new A());

	std::cin.get();
	return 0;
}