//#include<iostream> //构造方法的具体讲解 --> 构造函数是一种特殊的方法
//
//
//class  Entity
//{
//public:
//    float X, Y;
//
//    Entity() //构造方法
//    {
//        X = 3.3f;
//        Y = 5.4f;
//    }
//
//    Entity(float x, float y) //通过使用不同的参数，即可提供不同的方法名重载 --> 相同方法名的不同参数 --> 即可编写更多的重载方法
//    {
//        X = y;
//        Y = x;
//    }
//
//    void Print()
//    {
//        std::cout << X << " , " << Y << std::endl;
//    }
//};
//
//class Log
//{
//public:
//    static void Write(int a, int b)
//    {
//        int A, B;
//        A = a;
//        B = b;
//        std::cout << A << " , " << B << std::endl;
//    }
//};
//
//int main()
//{
//    Entity e;
//    e.Print(); //使用无参数实例化对象时，默认调用无参数方法为Print函数中将打印的X、Y赋值
//    Entity e1 (10.2f, 20.3f); //含参数实例化对象时，X、Y的值会通过含参数的方法进行赋值
//    e1.Print();
//
//    //注意：如果不实例化对象，则函数调用不会运行 --> 否则仅仅使用静态方法，即可不示例化对象
//
//    Log::Write(2 , 3); //使用静态方法，不实例化对象直接调用方法
//
//    std::cin.get();
//    return 0;
//}
