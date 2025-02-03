#include "ATarget.hpp"

ATarget::ATarget() : type("")
{
}

ATarget::ATarget(const std::string type) : type(type)
{
}

ATarget::~ATarget()
{
}

ATarget::ATarget(const ATarget &copy)
{
    *this = copy;
}

ATarget &ATarget::operator=(const ATarget &assign)
{
    if (this != &assign)
    {
        type = assign.type;
    }
    return (*this);
}

const std::string &ATarget::getType() const
{
    return (type);
}

void    ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;  
}
