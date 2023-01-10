/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassesAndObjects.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 21:50:01 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/09 21:50:30 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student 
{
    private:
        int scores;
    public :
        void    input();
        int     calculateTotalScore();
};

void    Student::input()
{
    int i1, i2, i3, i4, i5;
    cin >> i1 >> i2 >> i3 >> i4 >> i5;
    this->scores = i1 + i2 + i3 + i4 + i5;
}

int Student::calculateTotalScore()
{
    int count = 0;
    count += this->scores;
    return (count);
}

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
