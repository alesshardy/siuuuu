#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <vector>
# include "ASpell.hpp"

class SpellBook
{
  private:
            std::vector<ASpell *> spells; 
            SpellBook(const SpellBook &copy);
            SpellBook &operator=(const SpellBook &assign);
            
  public:
            SpellBook();
            ~SpellBook();

            void  learnSpell(const ASpell *spell);
            void  forgetSpell(const std::string &spellName);
            ASpell *createSpell(const std::string &spellName);
};

#endif