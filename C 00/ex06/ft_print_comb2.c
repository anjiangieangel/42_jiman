/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiman <jiman@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:32:44 by jiman             #+#    #+#             */
/*   Updated: 2023/07/29 17:46:23 by jiman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void putchar(char c) {
    write(1, &c, 1);
}

void ft_print_comb2(void) {
    char a_f = '0';
    char a_b = '0';

    while (a_f <= '9') {
        while (a_b <= '9') {
            char b_f = a_f;
            char b_b = (b_f == a_f) ? a_b + 1 : '0';

            while (b_f <= '9') {
                while (b_b <= '9') {
                    putchar(a_f);
                    putchar(a_b);
                    putchar(' ');
                    putchar(b_f);
                    putchar(b_b);

                    if (!(a_f == '9' && a_b == '8' && b_f == '9' && b_b == '9')) {
                        putchar(',');
                        putchar(' ');
                    }
                    b_b++;
                }
                b_f++;
                b_b = '0';
            }

            a_b++;
        }
        a_f++;
        a_b = '0';
    }
    putchar('\n');
}

int main() {
    ft_print_comb2();
    return 0;
}
