/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:06:40 by apintus           #+#    #+#             */
/*   Updated: 2025/02/03 17:04:20 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <vector>
# include "ASpell.hpp"
# include "SpellBook.hpp"

class Warlock
{
  private:
            SpellBook spellBook;
            std::string name;
            std::string title;
            Warlock();
            Warlock(const Warlock &copy);
            Warlock &operator=(const Warlock &assign);
            
  public:
            Warlock(const std::string name, const std::string title);
            ~Warlock();


            const std::string    &getName() const;
            const std::string    &getTitle() const; 

            void    setTitle(const std::string title);
            
            void    introduce() const;

            void  learnSpell(const ASpell *spell);
            void  forgetSpell(const std::string spellName);
            void  launchSpell(const std::string spellName, const ATarget &target);
};

#endif