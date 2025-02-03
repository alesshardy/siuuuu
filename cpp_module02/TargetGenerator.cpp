#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
}

void  TargetGenerator::learnTargetType(const ATarget *target)
{
    for (std::vector<ATarget *>::iterator it = targets.begin(); it != targets.end(); it++)
    {
        if ((*it)->getType() == target->getType())
            return ;
    }
    targets.push_back(target->clone());
}

void  TargetGenerator::forgetTargetType(const std::string &target)
{
    for (std::vector<ATarget *>::iterator it = targets.begin(); it != targets.end(); it++)
    {
        if ((*it)->getType() == target)
        {
            delete (*it);
            targets.erase(it);
            return ;
        }
    }
}

ATarget  *TargetGenerator::createTarget(const std::string &target)
{
    for (std::vector<ATarget *>::iterator it = targets.begin(); it != targets.end(); it++)
    {
        if ((*it)->getType() == target)
        {
            return (*it);
        }
    }
    return (NULL);
}