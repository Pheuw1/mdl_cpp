#include "Account.hpp"
#include <time.h>
#include <iostream>
#include <iomanip>

using namespace std;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {return _nbAccounts;}
int	Account::getTotalAmount( void ) {return _totalAmount;}
int	Account::getNbDeposits( void ) {return _totalNbDeposits;}
int	Account::getNbWithdrawals( void ) {return _totalNbWithdrawals;}
void	Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    cout << "accounts:" <<_nbAccounts <<";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << '\n';
}

Account::Account( void ) 
:_accountIndex(_nbAccounts++), _amount(0), _nbDeposits(0), _nbWithdrawals(0) {
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";amount:" << _amount << ";created"  << '\n';
}

Account::Account( int initial_deposit): _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
    _totalAmount += initial_deposit; //_totalNbDeposits++;
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";amount:" << _amount << ";created"  << '\n';
}

Account::~Account( void ) {
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed" << '\n';
    _nbAccounts--; _totalAmount -= this->_amount;
};

void	Account::makeDeposit( int deposit ) {
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << ++_nbDeposits << '\n';
    _amount += deposit; _totalNbDeposits++; _totalAmount += deposit;}

bool	Account::makeWithdrawal( int withdrawal ) {
    if (this->_amount >= withdrawal)
        {this->_amount -= withdrawal;_nbWithdrawals++; _totalNbWithdrawals++; _totalAmount -= withdrawal; return (1);}
    else 
        return (0);
}

int		Account::checkAmount( void ) const {return _amount;};

void	Account::displayStatus( void ) const {
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals <<  '\n';
}

void	Account::_displayTimestamp( void )
{
    time_t time_now = time(NULL);
    struct tm *pLocal = localtime(&time_now);
    cout << setfill('0') << '[' 
    << setw(2) << pLocal->tm_year + 1900 
    << setw(2) << pLocal->tm_mon 
    << setw(2) << pLocal-> tm_mday << "_"
    << setw(2) << pLocal->tm_hour 
    << setw(2) << pLocal->tm_min 
    << setw(2) << pLocal->tm_sec << "] ";
}