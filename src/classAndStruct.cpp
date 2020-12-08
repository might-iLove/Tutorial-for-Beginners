//#include<iostream>
////结构和类之间的唯一区别
//	//默认情况下，类是私有的
//	//默认情况下，结构是公有的 --> 永远不要在结构上使用继承
////可以在任何能够使用类class的位置使用结构struct --> 将以相同的方式工作
//
///*class Player 
//{
//public:
//	int x, y;
//	int speed;
//
//	void Move(int xa, int ya)
//	{
//		x += xa * speed;
//		y += ya * speed;
//	}
//};*/
//
//struct Player
//{
//public:
//	int x, y;
//	int speed;
//
//	void Move(int xa, int ya)
//	{
//		x += xa * speed;
//		y += ya * speed;
//	}
//};
//
//int main()
//{
//	Player player;
//	player.Move(1, -1);
//
//	std::cout << "player的x位置:" << player.x << "\nplayer的y位置:" << player.y << std::endl;
//	std::cin.get();
//	return 0;
//}