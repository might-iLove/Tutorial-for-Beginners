//#include<iostream> //�麯���Ľ���
//#include<string>
////�麯���Ĺ��ܣ��ٽ���ν�Ķ�̬������ͨ��������ʱӳ��Player���е�GetName()��������ȷ�ظ���Entity���е�GetName()���� --> ��Ϊ�����븸���еĺ���ͬ����������ͨ��������������GetName()�������������ڸ���Entity�в���GetName���� , ������麯���������õĵط�
//
//class Entity
//{
//public:
//	virtual std::string GetName() //�������ã����ᱻ��V����ӳ�� --> ʵ��ָ��������V���в�����ӳ��ӳ��ĺ���,���串��
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
//	Player(const std::string& name) : m_Name(name) //ӳ�丳ֵ������������ó�������˽�б���(����)
//	{}
//
//	std::string GetName() override
//	{
//		return m_Name;
//	}
//};
//
//void PrintName(Entity* entity) //��ȡʵ�����͵�ָ��
//{
//	std::cout << entity->GetName() << std::endl;
//}
//
//int main()
//{
//	Entity* e = new Entity();
//	PrintName(e); //ʹ��ָ�������ø����еķ���ʱ�����ü�ͷ�����
//
//	Player* p = new Player("chen yu peng"); //��Player��ʵ����ָ�����ʱ��ͬʱ���в����Ĵ��� --> Ҳ����˵��ʵ����ָ������ͬʱ����������ͬ���Ĺ��췽������˽�б�����ֵ
//	PrintName(p);
//
//	Player* entity = p;
//	PrintName(entity);
//
//	std::cin.get();
//	return 0;
//}