/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InheritanceIntroduction.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:20:08 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/13 19:20:40 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle{
    public:
    	void triangle(){
     		cout<<"I am a triangle\n";
    	}
};

class Isosceles : public Triangle{
    public:
    	void isosceles()
        {
    		cout<<"I am an isosceles triangle\n";
    	}
  		void description()
        {
            cout <<  "In an isosceles triangle two sides are equal" << endl;
        }
};

int main(){
    Isosceles isc;
    isc.isosceles();
  	isc.description();
    isc.triangle();
    return 0;
}
