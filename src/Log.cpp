//#include<iostream> //三种日志的使用
//
//class Log
//{
//public:
//	enum Level
//	{
//		LevelError = 0 , LevelWarning , LevelInfo
//	};
//
//private:
//	int m_LogLevel = LevelInfo;
//
//public:
//	void SetLevel(int level)
//	{
//		m_LogLevel = level;
//	}
//
//	void Error(const char* message)
//	{
//		if (m_LogLevel >= LevelError) //LogLevelError = 0
//		{
//			std::cout << "[ERROR]:" << message << std::endl;
//		}
//	}
//
//	void Warn(const char* message)
//	{
//		if (m_LogLevel >= LevelWarning) //LogLevelWarning = 1
//		{
//			std::cout << "[WARNING]:" << message << std::endl;
//		}
//	}
//
//	void Info(const char* message)
//	{
//		if (m_LogLevel >= LevelInfo) //LogLevelInfo = 2
//		{
//			std::cout << "[INFO]:" << message << std::endl;
//		}
//	}
//};
//
//int main()
//{
//	Log log;
//	log.SetLevel(Log::LevelError);
//	log.Warn("Hello!");
//	log.Error("Hello!");
//	log.Info("Hello!");
//
//	std::cin.get();
//	return 0;
//}