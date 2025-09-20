/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:04:06 by mdahani           #+#    #+#             */
/*   Updated: 2025/09/20 10:04:06 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

// * includes
#include <iostream>

// * Classes
class Harl{
    // ! private
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    
    // ! public
    public:
        void complain(std::string level);
};

#endif