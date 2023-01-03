/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ArrayIntroduction.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:34:30 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/02 21:35:02 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;


int	main()
{
	int	size;
	int	i = 0;
	int	arr[size];

	cin >> size;
	while (size--)
	{
		cin >> arr[i];
		i++;
	}
	int j = i - 1;
	while (j >= 0)
	{
		cout << arr[j] << " ";
		j--;
	}
	return (0);
}
