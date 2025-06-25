#include <iostream>
#include <string>
#include <cassert>

class Account {
public:
    // 외부에서 접근 가능한 멤버
    Account(const std::string& owner, double initialBalance)
    : owner_(owner), balance_(initialBalance) {
        assert(initialBalance >= 0); // 초기 잔액 음수 불가
    }

    void deposit(double amount) {
        assert(amount > 0); // 입금액은 양수
        balance_+= amount;
    }

    double getBalance() const {
        return balance_;
    }

protected:
    // 파생 클래스에서 접근 가능한 멤버
    std::string owner_; // 계좌 소유자
    void addIntereset(double rate) {
        assert(rate >= 0);
        balance_+= balance_ * rate;
    }

private:
    // 클래스 내부에서만 접근 가능한 멤버
    double balance_; // 잔액
    void logTransaction(const std::string& type, double amount) {
        std::cout << "Transaction: " << type << " $" << amount
                  << ", New Balance: $" << balance_ << "\n";
    }
};

// 파생 클래스: SavingAccount
class SavingAccount : public Account {
public:
    SavingAccount(const std::string& owner, double initialBalance, double interestRate)
        : Account(owner, initialBalance), interestRate_(interestRate) {
            assert(interestRate >= 0);
        }
    void applyInterest() {
        addIntereset(interestRate_); // protected 멤버 접근
        
    }
private:
    double interestRate_;
};

int main() {
    // 일반 계좌
    Account checking("Alice", 1000.0);
    checking.deposit(500.0); // public 멤버 접근
    std::cout << "Checking Balance: $" << checking.getBalance() << "\n";
    // checking.balance_ = 2000; // 오류: private 멤버
    // checking.owner_ = "Bob"; // 오류: protected 멤버

    // 저축 계좌
    SavingsAccount savings("Bob", 2000.0, 0.05); // 5% 이자율
    savings.deposit(1000.0); // public 멤버
    savings.applyInterest(); // protected 멤버 사용
    std::cout << "Savings Balance: $" << savings.getBalance() << "\n";

    return 0;
}