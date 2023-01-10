/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OverloadOperators.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:56:08 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/10 17:56:13 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
};

Complex operator+(Complex c1, Complex c2)
{
    Complex c;
    c.a = c1.a + c2.a;
    c.b = c1.b + c2.b;
    return (c);
}

ostream &operator<<(ostream &cout, Complex &c)
{
    cout<<c.a<<"+i"<<c.b;
    return (cout);
}
int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
