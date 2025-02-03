#include "ASpell.hpp"

ASpell::ASpell() : name(""), effects("")
{
}

ASpell::ASpell(const std::string name, const std::string effects) : name(name), effects(effects)
{
}

ASpell::~ASpell()
{
}

ASpell::ASpell(const ASpell &copy)
{
    *this = copy;
}

ASpell &ASpell::operator=(const ASpell &assign)
{
    if (this != &assign)
    {
        name = assign.name;
        effects = assign.effects;
    }
    return (*this);
}

const std::string &ASpell::getName() const
{
    return (name);
}

const std::string &ASpell::getEffects() const
{
    return (effects);
}

void    ASpell::launch(const ATarget &target) const
{
    target.getHitBySpell(*this);
}
