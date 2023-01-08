/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringStream.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:04:43 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/07 13:04:55 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
	vector<int> v;
    stringstream s(str);
    int i;
    char c;
    while (s >> i)
    {
        v.push_back(i);
        s >> c;
    }
    return (v);
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++)
        cout << integers[i] << "\n";
    return 0;
}
