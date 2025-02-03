/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:06:40 by apintus           #+#    #+#             */
/*   Updated: 2025/02/03 15:20:04 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock
{
  private:
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
};

#endif