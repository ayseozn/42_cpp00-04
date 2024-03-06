#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
class    contact
{
    private:
        std :: string first_name;
        std :: string last_name;
        std :: string nick_name;
        std :: string phone_number;
        std :: string d_arkest;

    public:
        void    setFirst(std::string firstName);
        void    setLast(std::string lastName);
        void    setNick(std::string nickName);
        void    setPhone(std::string phoneNumber);
        void    setdark(std::string darkest);

        std::string getFirst();
        std::string getLast();
        std::string getNick();
        std::string getPhone();
        std::string getdark();;
};

class   PhoneBook
{
    private:
        contact cnt[8];

    public:
        void    value_change(std:: string firstName, std::string lastName, std::string nickName,
    std::string phoneNumber, std::string darkest);
    int view_guide();
    void    save();
};

#endif
