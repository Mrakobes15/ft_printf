/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: risolon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:00:03 by risolon           #+#    #+#             */
/*   Updated: 2022/01/11 15:00:11 by risolon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_print *ft_initialise_tab(t_print *tab)                       
{                       
      tab->wdt = 0;        # we set everything to 0, false        
      tab->prc = 0;                        
      tab->zero = 0;                        
      tab->pnt = 0;                        
      tab->sign = 0;                        
      tab->tl = 0;                        
      tab->is_zero = 0;                        
      tab->dash = 0;                        
      tab->perc = 0;                        
      tab->sp = 0;                        
      return (tab);                       
}

int ft_printf(const char *format, ...)
{
    t_print *tab;
    int     count;
    int     result;

    count = 0;
    result = 0
    tab = malloc(sizeof(* tab));
    if (!tab)
        return (NULL);
    ft_initialise_tab(tab);
    while (format[i])
    {
        if (format[i] == "%")
            ft_eval_format(tab, format, i + 1);
        else
            result += ft_putchar(format[i]);
    }
}
