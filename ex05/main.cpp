/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:02:55 by mdahani           #+#    #+#             */
/*   Updated: 2025/09/20 10:02:55 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(){
    Harl msg;
    msg.complain("DEBUG");
    msg.complain("INFO");
    msg.complain("WARNING");
    msg.complain("ERROR");
}