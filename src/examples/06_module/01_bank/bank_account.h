//bank_account.h
class BankAccount
{
    public: // access specifiers-users of our class(other obj) can see whats in public 
        BankAccount()=default; // synthesized default constructor
        BankAccount(int b) : balance(b){}
        int get_balance()const{return balance;}
        void deposit(int amount);
        void withdraw(int amount);

    private: // access specifier-ONLY BANK ACCOUNT CLASS SEES DATA/FUNCTION IN PVT.
        int balance{0}; //protect the data integrity
};

void display_account(BankAccount account);