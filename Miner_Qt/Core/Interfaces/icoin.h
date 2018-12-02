#ifndef ICOIN_H
#define ICOIN_H

#include <QObject>
#include "icoinconfigurer.h"

using namespace std;

namespace DigibyteMiner{
    namespace Core{
        namespace Interfaces{


            class Pool
            {
                string Name;
                string Link;
                string WalletName;
                string WalletAddress;
                Pool(string name, string link);
                ~Pool();

                virtual bool ValidateAddress(string address)
                {
                    return true;
                }

                string WrongWallet;

                /// <summary>
                /// this generic implementation is not giarenteed to work with every pool
                /// </summary>
                /// <param name="wallet"></param>
                /// <returns></returns>
                virtual  string GetAccountLink(string wallet)
                {
                    try
                    {
                        return Link + "/" + wallet;
                    }
                    catch (Exception e)
                    {
                    }
                    return "";
                }
            };


            class ICoin
            {
                /// <summary>
                /// nam of coin
                /// </summary>
                string Name;

                /// <summary>
                /// logo of the coin. this would be reqiired to show in thr ui
                /// </summary>
                Bitmap Logo;

                /// <summary>
                /// Most coins would have its own way of setting the miner. if u have custom options u can provide
                /// a custom ui to take the settings
                /// </summary>
                ICoinConfigurer SettingsScreen;

                list<Pool> GetPools();

                /// <summary>
                /// The output of different miners would come i different formats
                /// This is the reader which can read output of this coin and provide us wioth data
                /// </summary>
                //IOutputReader OutputReader { get; }//Todo this might be neede to move as coins dont have readers. coins have miners(1 or more) which have readers

                IHashAlgorithm Algorithm;

                /// <summary>
                /// takes an existing script and adds coin specific data to it
                /// </summary>
                /// <param name="script"></param>
                /// <returns></returns>
                string GetScript(string script);

                /// <summary>
                /// Please Note this is only used in Debug mode for wuick testing of the miner
                /// </summary>
                string DefaultAddress;



            };



        }
    }
}



#endif // ICOIN_H
