#ifndef ATRAGET_HPP
# define ATRAGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
  protected:
            std::string type;
            
  public:
            ATarget();
            ATarget(const std::string type);
            ATarget(const ATarget &copy);
            ATarget &operator=(const ATarget &assign);
            virtual ~ATarget();

            const std::string    &getType() const;

            virtual ATarget *clone() const = 0;

            void    getHitBySpell(const ASpell &spell) const;
};

#endif