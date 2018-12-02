#ifndef ICOINCONFIGURER_H
#define ICOINCONFIGURER_H

#include <QObject>


using namespace std;

namespace DigibyteMiner{
    namespace Core{
        namespace Interfaces{

            class ICoin;

            class ICoinConfigurer
            {
                /// <summary>
                /// parent form for this form if this form is gonna be binded to something instead of as a standaline
                /// </summary>
                /// <param name="parent"></param>
                public:
                    virtual void AssignParent(object parent);

                    virtual void AssignCoin(ICoin *coin);

                    string Pool;

                    string Wallet;
                    string Password;
                    string PoolAccount;

            };

        }
    }
}


#endif // ICOINCONFIGURER_H
