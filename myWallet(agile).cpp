//An Agile approach to creating a simple wallet application.
//Test driven, features included but not limited to:
//Display and hold balance, deposit funds, and release funds.

#include <iostream>
#include <assert.h>
//try catch, throw -1 if error like overflow or type error,and print to stderr

template <class T>

class myWallet{
    private:
        long double balance;

        T addBalance(T add){
            add = (long double)add;
            if(balance = balance + add)
                return 1;
        }

        T subBalance(T sub){
            if((balance = balance - sub) 
                return 1;
        }
    public:
        T displayFunds(){
            return balance;
        }
        T depositFunds(T deposit){
            return addBalance;
        }
        T releaseFunds(T charge){

        }
 // only run tests at creation of a wallet or $0
        void depositFunds_test(){
            assert(depositFunds(INTMAX_MAX) == (displayFunds() - INTMAX_MIN) );    
        }

        void releaseFunds_test(){
            assert(releaseFunds(INTMAX_MAX) == 0 - INTMAX_MAX);
        }

        void displayFunds_test(){
            assert(displayFunds() == 0);
            assert(displayFunds() + 100 == 0 + 100);
        }

};
