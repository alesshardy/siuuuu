#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
}

void  SpellBook::learnSpell(const ASpell *spell)
{
    for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
    {
        if ((*it)->getName() == spell->getName())
            return ;
    }
    spells.push_back(spell->clone());
}

void  SpellBook::forgetSpell(const std::string &spellName)
{
    for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
    {
        if ((*it)->getName() == spellName)
        {
            delete (*it);
            spells.erase(it);
            return ;
        }
    }
}

ASpell  *SpellBook::createSpell(const std::string &spellName)
{
    for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
    {
        if ((*it)->getName() == spellName)
        {
            return (*it);
        }
    }
    return (NULL);
}