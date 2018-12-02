#ifndef IHASHALGORITHM_H
#define IHASHALGORITHM_H

#include <QObject>
#include <list>
#include "icoin.h"

using namespace std;

namespace DigibyteMiner{
    namespace Core{
        namespace Interfaces{

            /*delegate void OneMinerTimerEvent();*/

            class IHashAlgorithm
            {
                /// <summary>
                /// Name of the algo
                /// </summary>
                string Name;

                /// <summary>
                /// Coins supported by this algo. eg: Ethhash would support Ethereum , Ubiq etc
                /// </summary>
                list<ICoin> SupportedCoins;

                /// <summary>
                /// Some algo can profitably dual mine eg ethhash but not equihash
                /// </summary>
                bool SupportsDualMining;

                /// <summary>
                /// List of coin s supportde by this algo
                /// </summary>
                list<ICoin> SupportedDualCoins;

                /// <summary>
                /// This will be the coin that will be given precendence if we hav to display anywhere
                /// </summary>
                ICoin DefaultCoin;

                /// <summary>
                /// This will be the coin that will be given precendence if we hav to display anywhere
                /// </summary>
                ICoin DefaultDualCoin;

                IMiner CreateMiner(ICoin mainCoin, bool dualMining, ICoin dualCoin, string minerName);

                IMiner RegenerateMiner(IMinerData miner);

                IMiner DefaultMiner();


            };

        }
    }
}



#endif // IHASHALGORITHM_H
