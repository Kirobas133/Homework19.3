// Homework19.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

enum Type {
    warning = 0,
    error = 1,
    fatalError = 2,
    unknownError = 3
};

class LogMessage {
private:
    int type_ = 3;
    std::string message_ = "Unexpected Error!!!";
    std::vector<std::unique_ptr<LogMessage>> sublogmsg;
    LogMessage* parent_ = nullptr;
public:
    LogMessage(int type, std::string message) : type_(type), message_(message) {}
    virtual ~LogMessage() = default;
    Type type() const {
        return 
    };
    const std::string& message() const {
        return "";
    };
};

int main()
{
    std::cout << "Hello World!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"