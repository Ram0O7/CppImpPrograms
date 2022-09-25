#include <iostream>
#define log(x) std::cout << x
using std::cin;

class bank_account
{
    long long int account_number;
    int total_balance;
    int pin;

public:
    std::string depositer_name;
    std::string type_of_account;
    void create_account();
    void curr_balance()
    {
        log("\nCurrent Balance: $" << total_balance << std::endl);
    }
    void account_info();
    void deposit_amount();
    void withdraw_amount();
};
// creates an account
void bank_account::create_account()
{
    log("Enter Account Holder's name: ");
    cin >> depositer_name;
    log("Select Account type(savings,personal...): ");
    cin >> type_of_account;
    log("Your account number: ");
    cin >> account_number;
    log("Create a secret pin: ");
    cin >> pin;
    total_balance = 0;
    log("Account Successfully created!\n\n");
}
// show account info
void bank_account::account_info()
{
    int temp_pin;
    log("\nEnter pin: ");
    cin >> temp_pin;
    if (temp_pin == pin)
    {
        log("\nAccount Holder: " << depositer_name << std::endl);
        log("Account Number: " << account_number << std::endl);
        log("Account Type: " << type_of_account << std::endl);
        log("Balance Remaining: $" << total_balance << std::endl);
    }
    else
    {
        log("wrong pin! try again...");
        account_info();
    }
}
// deposite amount to the bank account
void bank_account::deposit_amount()
{
    int deposit_value;
    log("\nEnter deposit amount: ");
    cin >> deposit_value;
    total_balance += deposit_value;
    curr_balance();
}
// withdraw amount from the bank account
void bank_account::withdraw_amount()
{
    int withdraw_value;
    log("\nEnter withdraw amount: ");
    cin >> withdraw_value;
    if (withdraw_value > total_balance)
    {
        log("\nOops! Balance insufficient\n\n");
        log("try again!\n");
    }
    else
    {
        total_balance -= withdraw_value;
    }
    curr_balance();
}

int find_member(bank_account *account,std::string member_name){
    int i;
    for (i = 0; i < 10; i++)
    {
        if(account[i].depositer_name == member_name)
            return i;
    }
         if(i==10){
            log("member's not registered in this bank\n");
        }
}

// Accessing Account through functions
int access_account(bank_account *account, int count)
{
    int choice,i,n=1;
    std::string member;
    log("press 0 to check desired account\npress 1 for account info\npress 2 for deposit amount\npress 3 for withdrawal\npress 4 to check balance\npress 5 to add an account\n");
    for (i = 0; i < n;i++){
    cin >> choice;
        switch (choice)
        {
        case 0:
            log("Go through any chosen account,Enter Account Holder's name to visit:\n");
            cin >> member;
            count = find_member(account, member);
            access_account(account, count);
            break;
        case 1:
            account[count].account_info();
            break;
        case 2:
            account[count].deposit_amount();
            break;
        case 3:
            account[count].withdraw_amount();
            break;
        case 4:
            account[count].curr_balance();
            break;
        case 5:
            ++count;
            account[count].create_account();
            break;
        default:
            log("you gotta choose from the given options: ");
            access_account(account, count);
            break;
        }
        log("wanna explore further?,\nPress 1 to proceed,Press any key to exit: ");
        cin >> choice;
        if(choice == 1){
            n++;
            log("choose again from the options given : \n");
        } else{
            return 0;
        }
    }
}

int main()
{
    char confirm,next;
    bank_account *account = new bank_account[10];

    log("Let's get you all set up to create an Account(y/n): ");

    cin >> confirm;
    switch (confirm)
    {
    case 'y':
        account[0].create_account();
        access_account(account, 0);
        break;
    case 'n':
        log("got it! see ya next time");
        break;
    default:
        log("You had to press Y or N dude, this time I let you create accout,take care ahead!: \n");
        account[0].create_account();
        break;
    }

    delete [] account;
    cin.get();

    return 0;
}