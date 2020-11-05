#include <iostream>

class LogFormatter {
public:
    LogFormatter() {}

public:
    class FormatItem {
    public:
        ~FormatItem() {}
        virtual void format(std::ostream& os, std::string str, int level) = 0;
    };

private:
    
};

class TabFormatItem : public LogFormatter::FormatItem {
public:
    TabFormatItem(const std::string& str = "") {}
    void format(std::ostream& os, std::string str, int level) override {
        os << "\t";
    }
};

int main(int argc, char** argv) {
    

    return 0;
}
