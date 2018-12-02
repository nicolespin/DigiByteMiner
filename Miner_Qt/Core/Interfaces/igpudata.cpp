#include "igpudata.h"
#include <regex>

using namespace std;

namespace DigibyteMiner{
    namespace Core{
        namespace Interfaces{



            GpuData::GpuData(string name)
            {
                Make = CardMake::END;
                GPUName = name;
                Hashrate = "0";
                FanSpeed = "0";
                Temperature = "0";
            }

            bool GpuData::IdentifyMake()
            {
                try
                {
                    std::smatch match;
                    regex nvidia_pattern("(N|n)(V|v)(I|i)(D|d)(I|i)(A|a)|(G|g)(E|e)(F|f)(O|o)(R|r)(C|c)(E|e)|(G|g)(T|t)(X|x) ");
                    regex amd_pattern("(A|a)(M|m)(D|d)|(R|r)(A|a)(D|d)(E|e)(O|o)(N|n)|(R|r)(X|x)");
                    bool r_nvidia_id = regex_match(GPUName, match, nvidia_pattern);
                    bool r_amd_id = regex_match(GPUName, match, amd_pattern);
                    if (r_nvidia_id)
                        Make= CardMake::Nvidia;
                    else if (r_amd_id)
                        Make = CardMake::Amd;
                    else
                        Make = CardMake::UNKNOWN;
                    return true;
                }
                catch (Exception)
                {
                }
                return false;
            }


        }
    }
}
