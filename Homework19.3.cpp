// Homework19.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

enum Type {
    warning,
    error,
    fatalError,
    unknownError
};

class LogMessage {
private:
    Type type_ = unknownError;
    std::string message_ = "Unexpected Error!!!";
    std::vector<std::unique_ptr<LogMessage>> sublogmsg_;
    LogMessage* parent_ = nullptr;
public:
    LogMessage(Type type, std::string message) : type_(type), message_(message) {}
    virtual ~LogMessage() = default;
    void addLogMessage(std::unique_ptr<LogMessage> sublogmsg) {
        sublogmsg->parent_ = this;
        sublogmsg_.push_back(std::move(sublogmsg));
    }
    Type type() const {
        return type_;
    };
    const std::string& message(int errcode) const {
        if (type() == errcode) {
            return "err msg!222";
        }
        if(parent_) {
            parent_->message(errcode);
        }
        else {

        }
    };

};

int main()
{
    std::cout << "Hello World!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"