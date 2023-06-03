#ifndef LAB5_OUT_OF_RANGE_H
#define LAB5_OUT_OF_RANGE_H

#include <string>

class out_of_len : public std::exception {
public:
    out_of_len(const char* msg) : message(msg) {}
    const char* what() const noexcept override {
        return message;
    }
private:
    const char* message;
};

#endif