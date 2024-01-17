/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaramol <bkaramol@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:18:15 by bkaramol          #+#    #+#             */
/*   Updated: 2023/08/07 19:19:41 by bkaramol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* uzun stringler (mac’lerde 25+ byte) heap’te saklanırken daha kısa
stringler hafızadan tasarruf için static buffer’da saklanırlar. 25 byte’tan
kısa stringleri de heap’te tutmak istiyosan buna özel kod yazmalısın: */

#include <iostream>
using namespace std;

// Overloading Operator
void *operator new(size_t s)
{
	cout << "Allocated in Heap!!" << endl;
	return malloc(s);
}

int main()
{
	std::string str1 = "Hello this is me Here!!";
	// 27 char it is greater than 25

	std::string str2 = "hello";
	// 7 char it is smaller than 25

	// o yüzden sadece str1 25+ byte oldugundan operator() bir kere calıstı
}
