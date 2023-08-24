/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia_sets.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:46:00 by eel-moun          #+#    #+#             */
/*   Updated: 2022/07/01 21:12:03 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	julia(t_var *var)
{
	var->zoom.x = 0.285;
	var->zoom.y = 0.01;
	var->max.x = 2;
	var->min.x = -2;
	var->max.y = 2;
	var->min.y = -2;
	var->itr = 250;
	var->id_set = 0;
	var->bpp = 1;
}

void	julia1(t_var *var)
{
	var->zoom.x = 0.3;
	var->zoom.y = 0.5;
	var->max.x = 2;
	var->min.x = -2;
	var->max.y = 2;
	var->min.y = -2;
	var->itr = 250;
	var->id_set = 0;
	var->bpp = 1;
}

void	julia2(t_var *var)
{
	var->zoom.x = -0.038088;
	var->zoom.y = 0.9754633;
	var->max.x = 2;
	var->min.x = -2;
	var->max.y = 2;
	var->min.y = -2;
	var->itr = 250;
	var->id_set = 0;
	var->bpp = 1;
}

void	julia3(t_var *var)
{
	var->zoom.x = -0.4;
	var->zoom.y = 0.6;
	var->max.x = 2;
	var->min.x = -2;
	var->max.y = 2;
	var->min.y = -2;
	var->itr = 250;
	var->id_set = 0;
	var->bpp = 1;
}
