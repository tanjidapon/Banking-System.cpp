#include<iostream>
using namespace std;
class MobileBanking {
private:
    float balance=0;
public:

    void takaIn(int amount) {
        balance+=amount;
    }

    void takaOut(int amount, int cho) {
        if(cho==2) {
            cout<<"Cash out charge 2%"<<endl;
            if(balance >= (amount+ amount *2/100))
                balance-=amount-amount*2/100;

            else cout<<"Insuffician balance"<<endl;
        }
        else if(cho==3) {
            cout<<"Send money charge 0.5%"<<endl;
            if(balance >= (amount+ amount *0.5/100))
                balance-=amount-amount*0.5/100;

            else cout<<"Insuffician balance"<<endl;
        }

        else if(cho==4) {
            if(balance >= amount)
                balance-=amount;
            else cout<<"Insuffician balance"<<endl;
        }
    }
    void checkBalance() {
        cout<<"Your current balance is "<<balance;
    }
};

int main() {
    int choice,amount;
    MobileBanking m1;

    do {
        cout<<"\n\nMobile Banking Menu"<<endl;
        cout<<"1.Cash in\n"
            "2.Cash out\n"
            "3.Send Money\n"
            "4.Recharge\n"
            "5.Check Balance\n"
            "6.Exit"<<endl;

        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice){
        case 1:
        cout<<"Enter amout"<<endl;
        cin>>amount;
        m1.takaIn(amount);
        break;
    case 2:
        cout<<"Enter amout"<<endl;
        cin>>amount;
        m1.takaOut(amount,choice);
        break;
    case 3:
        cout<<"Enter amout"<<endl;
        cin>>amount;
        m1.takaOut(amount,choice);
        break;
    case 4:
        cout<<"Enter amout"<<endl;
        cin>>amount;
        m1.takaOut(amount,choice);
        break;
    case 5:
        m1.checkBalance();
        break;
    case 6:
        cout<<"Thank you for stay with us"<<endl;
        break;
    default:
        cout<<"Invalid input"<<endl;
        }
    } while(choice!=6);

    return 0;

}
