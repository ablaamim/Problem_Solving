/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BasicDataTypes.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:04:30 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/02 18:12:10 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

using namespace std;

int	main()
{
	int		i;
	long	l;
	char	c;
	float	f;
	double	d;

	cin >> i >> l >> c >> f >> d;
	cout << i << endl;
	cout << l << endl;
	cout << c << endl;
	cout << fixed << setprecision(3) << f << endl;
	cout << fixed << setprecision(9) << d << endl;
	return (0);
}
