#include "hamming.h"

namespace hamming {
int compute(const std::string& first,const std::string& second)
{
    auto dna_difference{-1};
    if(first.length()==second.length())
    {
        dna_difference=0;
        for(size_t index=0;index<first.length();++index)
        {
            if(first.at(index)!=second.at(index))
            {
                ++dna_difference;
            }
        }
    }
    return dna_difference;
}
}  // namespace hamming
