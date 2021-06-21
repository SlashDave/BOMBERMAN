/*
** EPITECH PROJECT, 2021
** Indie
** File description:
** GameSettings
*/

#ifndef GAMESETTINGS_HPP_
#define GAMESETTINGS_HPP_

namespace Engine
{
    
    //Based class to store and handle game's global settings
    class GameSettings {
        public:
            GameSettings();
            ~GameSettings();
            

            //To store if yes or not it must be sound playind during the game
            bool hasSound; 
        protected:
        private:
    };    
} // namespace Engine


#endif /* !GAMESETTINGS_HPP_ */
