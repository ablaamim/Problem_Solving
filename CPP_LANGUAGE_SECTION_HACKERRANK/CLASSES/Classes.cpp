/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:02:33 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/08 15:02:36 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student 
{
    private :
        int age;
        int standard;
        string first_name, last_name;
    public :
        void set_age(int age);
        int get_age();
        void set_standard(int standard);
        int get_standard();
        void    set_first_name(string first_name);
        string  get_first_name();
        void    set_last_name(string last_name);
        string  get_last_name();
        string    to_string();              
};

void    Student::set_age(int age)
{
    this->age = age;
}

int Student::get_age()
{
    return (this->age);
}

void    Student::set_standard(int standard)
{
    this->standard = standard;
}

int Student::get_standard()
{
    return (this->standard);
}

void    Student::set_first_name(string first_name)
{
    this->first_name = first_name;   
}

string Student::get_first_name()
{
    return (this->first_name);
}

void    Student::set_last_name(string last_name)
{
    this->last_name = last_name;
}

string Student::get_last_name()
{
    return (this->last_name);
}

string Student::to_string()
{
    stringstream age, standard;
    string       buffer;
    age << this->age;
    standard << this->standard;
    buffer = age.str() + "," + this->first_name + "," + \
    this->last_name + "," + standard.str();
    return (buffer);
}

int main()
{
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    return 0;
}
