/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substring_comparison.java                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:40:56 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/28 20:40:58 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = "";
        String largest = "";
        
        java.util.List<String> a = new java.util.ArrayList<>();
        int i;
        
        i = 0;
        while (i < s.length() - k + 1)
        {
            a.add(s.substring(i, i + k));
            i++;   
        }
        java.util.Collections.sort(a);
        smallest = a.get(0);
        largest = a.get(a.size() -1 );        
        return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }

