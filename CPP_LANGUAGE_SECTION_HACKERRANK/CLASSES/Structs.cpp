/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Structs.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:02:44 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/08 15:03:12 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Student
{
    int age;
    std::string first_name;
    std::string last_name;
    int standard; 
};

int main()
{
    Student st;
    std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    std::cout << st.age << " " << st.first_name << " " << st.last_name \
	<< " " << st.standard;
    return 0;
}
