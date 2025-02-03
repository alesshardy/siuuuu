#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <vector>
# include "ATarget.hpp"

class TargetGenerator
{
  private:
            std::vector<ATarget *> targets; 
            TargetGenerator(const TargetGenerator &copy);
            TargetGenerator &operator=(const TargetGenerator &assign);
            
  public:
            TargetGenerator();
            ~TargetGenerator();

            void  learnTargetType(const ATarget *target);
            void  forgetTargetType(const std::string &target);
            ATarget *createTarget(const std::string &target);
};

#endif