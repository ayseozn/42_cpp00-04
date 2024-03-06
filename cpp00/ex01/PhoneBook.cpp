#include "classPhoneBook.hpp"
#include <iostream>


void    contact::setFirst(std::string firstName){
    first_name = firstName;}

void    contact::setLast(std::string lastName){
    last_name = lastName;}

void    contact::setNick(std::string nickName){
    nick_name = nickName;}

void    contact::setPhone(std::string phoneNumber){
    phone_number = phoneNumber;}

void    contact::setdark(std::string darkest){
    d_arkest = darkest;}


void PhoneBook::value_change(std:: string firstName, std::string lastName, std::string nickName,
    std::string phoneNumber, std::string darkest)
{
    static int index;
    if (index == 8)
        index = 0;
    if (index < 8)
    {
        cnt[index].setFirst(firstName);
        cnt[index].setLast(lastName);
        cnt[index].setNick(nickName);
        cnt[index].setPhone(phoneNumber);
        cnt[index].setdark(darkest);
        index++;
    }
}

void    PhoneBook::save()
{
    std :: string firstName, lastName, nickName, phoneNumber, darkest;

    std :: cout << "first Name: ";
    std :: cin >> firstName;
    std :: cout << "Last Name: ";
    std :: cin >> lastName;
    std :: cout << "nickname: ";
    std :: cin >> nickName;
    std :: cout << "phone number: ";
    std :: cin >> phoneNumber;
    std :: cout << "darkest: ";
    std :: cin >> darkest;

    PhoneBook::value_change(firstName, lastName, nickName, phoneNumber, darkest);
}

std::string contact::getFirst(){return(first_name);}

std::string contact::getLast(){return(last_name);}

std::string contact::getNick(){return(nick_name);}

std::string contact::getPhone(){return(phone_number);}

std::string contact::getdark(){return(d_arkest);}

std::string    ft_size(std::string strng)
{
    int size = strng.size();
    if (size > 10)
    {
        strng = strng.substr(0, 9) + ".";
    }
    return(strng);
}

int PhoneBook::view_guide()
{
    int index = 0;
    if (!cnt[index].getFirst().empty())
    {
        while (index < 8 && !cnt[index].getFirst().empty())
        {
            if(index == 0)
                std::cout << "     index|First Name| Last Name| Nick Name|" << std::endl;
            for (size_t i = 0; i < 44; i++)
                std::cout << '-';
            std::cout << std::endl;
            std::cout << std::setw(10) << index << '|';
            std::cout << std::setw(10) << ft_size(cnt[index].getFirst()) << '|';
            std::cout << std::setw(10) << ft_size(cnt[index].getLast()) << '|';
            std::cout << std::setw(10) << ft_size(cnt[index].getNick()) << '|' << std::endl;
            index++;
        }
        do
        {
            std::cout << "list no: ";
            std::cin >> index;
            if(index < 0 || index > 7)
                std::cout << "Choose a number between 0 and 7." << std::endl;
        } while (index < 0 || index > 7);
        std::cout << "First Name: " << cnt[index].getFirst() << std::endl;
        std::cout << "Last Name: " << cnt[index].getLast() << std::endl;
        std::cout << "Nick Name: " << cnt[index].getNick() << std::endl;
        std::cout << "Phone Number: " << cnt[index].getPhone() << std::endl;
        std::cout << "Darkest: " << cnt[index].getdark() << std::endl;
        }
    else
        std::cout << "No number saved in contacts!" << std::endl;
    return(1);
}

int main()
{
    PhoneBook phone;
    std :: string command;

    std :: cout << "Welcome to my phone book :)" << std :: endl;
    while (1)
    {
        std :: cout << "-> ";
        std :: cin >> command ;

        if (command == "ADD")
        {
            phone.save();
        }
        else if(command == "SEARCH")
        {
            phone.view_guide();
        }
        else if(command == "EXIT")
        {
            std::cout << "GOODBYE FOREVER!\n";
            return 0;
        }
    }
}
