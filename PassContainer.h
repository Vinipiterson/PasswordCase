#pragma once
#include <string>

class PassContainer
{
public:
    PassContainer(std::string NLink = "TuaMae@gmail.com", std::string NPassword = "Tua mae é minha") : Link(NLink), Password(NPassword) {}
    
private:
    std::string Link{};
    std::string Password{};

public:
    inline  std::string GetLink() const { return Link; }
    inline std::string GetPassword() const { return Password; }

    inline void SetLink(std::string NLink) { Link = NLink; }
    inline void SetPassword(std::string NPassword) { Link = NPassword; }
};