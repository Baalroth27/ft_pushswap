/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 16:42:26 by ilbozhek          #+#    #+#             */
/*   Updated: 2026/06/19 16:55:57 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

static void case_three(t_stack *stack_a, t_stack *stack_b, t_ops *ops);
static void case_two(t_stack *stack_a, t_stack *stack_b, t_ops *ops);
static void case_one(t_stack *stack_a, t_stack *stack_b, t_ops *ops);

void    sort_three(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
    if (stack_a->head->index == 3)
        case_three(stack_a, stack_b, ops);
    else if (stack_a->head->index == 2)
        case_two(stack_a, stack_b, ops);
    else
        case_one(stack_a, stack_b, ops);
}
static void case_three(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
    if (stack_a->head->next->index == 2)
    {
        sa(stack_a, ops);
        rra(stack_a, ops);  
    }
    else
        rra(stack_a, ops);
}
static  void case_two(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
    if (stack_a->head->next->index == 3)
        rra(stack_a, ops);
    else
        sa(stack_a, ops);
}
static  void case_one(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
    sa(stack_a, ops);
    rra(stack_a, ops);
}