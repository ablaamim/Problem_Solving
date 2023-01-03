/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   VariableSizedArray.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:53:49 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/02 21:54:23 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main()
{
	int n, q;
	cin >> n;
	cin >> q;

	int** a = new int* [n];
	int* arrlen = new int[n];
	for (int i=0; i<n; i++)
	{
		cin >> arrlen[i];
		a[i] = new int[arrlen[i]];
		for (int j=0; j<arrlen[i]; j++)
			cin >> a[i][j];
	}
	for (int k=0; k<q; k++)
	{
		int i{},j{};
		cin >> i >> j;
		cout << a[i][j] <<endl;
	}
	return (0);
}
