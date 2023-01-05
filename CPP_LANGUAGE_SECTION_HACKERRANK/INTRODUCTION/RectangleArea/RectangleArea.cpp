/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RectangleArea.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:24:13 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/05 21:24:35 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

class Rectangle
{
    public :
        int height;
        int width;
        void    display();
};

class RectangleArea : public Rectangle
{
    public :
        void  read_input();
        void  display();
};

void    RectangleArea::read_input()
{
    cin >> this->height;
    cin >> this->width;
}

void    RectangleArea::display()
{
    cout << this->height * this->width << endl;
}

void    Rectangle::display()
{
    cout << this->height << " " << this->width << endl;
}


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
