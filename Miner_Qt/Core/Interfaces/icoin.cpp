#include "icoin.h"

namespace DigibyteMiner{
    namespace Core{
        namespace Interfaces{

            Pool::Pool(string name, string link)
            {
                Name = name;
                Link = link;
                WalletName = "Account.WorkerName";
                WalletAddress = "asatyarth.arun";
                WrongWallet = "";
            }


        }
    }
}
