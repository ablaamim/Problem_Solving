/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pointers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:24:37 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/02 21:25:23 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

void	update(int *a,int *b)
{
	int	alter;
	alter = *a;
	*a = abs(*a + *b);  
	*b = abs(alter - *b);
}

using namespace std;

int	main()
{
	int a, b;
	int *pa = &a, *pb = &b;

	cin >> a >> b;
	update(pa, pb);
	cout << a << endl;
	cout << b << endl;
	return (0);
}
