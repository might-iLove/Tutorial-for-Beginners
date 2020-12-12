#include<iostream> //�ӿڵĽ��� --> �ӿڼ��Ǵ��麯��
#include<string>

class Printable
{
public:
	virtual std::string GetClassName() = 0;//����ʵ������Ļ���(����)���ڵ�λ�� --> ������ʵ������Ļ�����ζ�Ž��串����������
	//�����麯���ҵ���0��������ʹ���Ϊ ���麯�� --> �����ܹ�ʵ������ʵ����Ķ��� --> ����ʹ��ʵ�ָù��ܵ�һ������
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
	Player(const std::string& name) : m_Name(name) //ӳ�丳ֵ������������ó�������˽�б���(����)
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

void PrintName(Entity* entity) //��ȡʵ�����͵�ָ��
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