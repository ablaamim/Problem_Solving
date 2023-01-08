/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:04:14 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/07 13:04:26 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	std::string a,b;
    
    getline(cin, a);
    getline(cin, b);
    cout << a.length() << " " << b.length() << endl;
    cout << a + b << endl;
    char swap = a[0];
    a[0] = b[0];
    b[0] = swap;
    cout << a << " " << b;    
    return 0;
}
