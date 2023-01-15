/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MultilevelInheritance.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:51:06 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/15 15:53:55 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

class Triangle
{
	public:
		void triangle()
        {
			cout<<"I am a triangle\n";
		}
};

class Isosceles : public Triangle
{
  	public:
  		void isosceles()
          {
    		cout<<"I am an isosceles triangle\n";
  		}
};

class Equilateral : public Isosceles
{
      public :
        void equilateral()
        {
            cout << "I am an equilateral triangle" << endl;
        }
};

int main()
{
  
    Equilateral eqr;
    
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return (0);
}
