#ifndef IGPUDATA_H
#define IGPUDATA_H

#include <QObject>

using namespace std;

namespace DigibyteMiner{
    namespace Core{
        namespace Interfaces{

            enum CardMake
            {
                Nvidia=0,
                Amd,
                CPU,
                COMMON,//this means the gpu or the gpuminer is independend of type
                UNKNOWN,
                END,
            };


            class GpuData
            {
                public:
                    string Hashrate;
                    string FanSpeed;
                    string Temperature;
                    string GPUName;//eg GPU0
                    CardMake Make;
                    GpuData(string name);
                    ~GpuData();

                    bool IdentifyMake();

            };


        }
    }
}




#endif // IGPUDATA_H
