/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RectangleArea.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:03:51 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/14 23:06:43 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

class Rectangle
{
    private :
        int width;
        int height;
    public :
        int get_height()
        {
            return (height);
        }
        int get_width()
        {
            return (width);
        }
        void set_height()
        {
            cin >> height;
        }
        void set_width()
        {
            cin >> width;
        }
        void display()
        {
            cout << height << " " << width << endl;
        }
};

class RectangleArea : public Rectangle
{
    public :
        void read_input()
        {
            set_height();
            set_width();
        }
        void display()
        {
            cout << get_height() * get_width();
        }
};

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
