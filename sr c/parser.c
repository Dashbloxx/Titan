#include <string.h>
#include "./parser.h"

char *parse_preprocessor(char *code)
{
    int i;
    for(i = 0; i <= strlen(code); i++)
    {
        /*
         * FOR the #define FUNCTION, WE WILL JUST CREATE
         * NORMAL VARIABLES BECAUSE MY BRAIN CAN'T HANDLE
         * A WAY TO MAKE VAEIABLES THAT ARE ON THE PREPROCESSOR'S
         * SIDE.
         */

        /*
         * THE VARIABLE BELOW DETERMINES HOW MANY LEVELS OF
         * `IF`s THERE ARE
         */
        int if_lvl = 0;
        if(code[i] == '#' && code[i + 1] == 'i' && code[i + 2] == 'f' && code[i + 3] == ' ')
        {
            i = i + 3;
            if_lvl++;
            int current_lvl = if_lvl;
            /*
             * KEEP ADDING CHARACTERS TO A TEMPORARY STRING
             * TO SEE WHAT THE NAME OF THE VARIABLE BEING COMPARED
             * TO IS
             */
            char temp_illillilil[] = "";
            for(int j = 0; code[j] != ' '; i++)
            {
                strncat(temp_illillilil, &code[j], 1);
                /*
                 * NOW, HOW DO WE MAKE A DICT IN C? I WANT O MAKE
                 * A DICT IN C, WHERE THE PREPROCESSOR VARIABLES
                 * CAN BE ACCESSED THROUGH A DICT...
                 */
            }
        }
        else if(code[i] = '#' && code[i + 1] == 'e' && code[i + 2] == 'n' && code[i + 3] == 'd' && code[i + 4] == 'i' && code[i + 5] == 'f' && code[i + 6] == ' ')
        {
            i = i + 6;
            if_lvl--;
            /*
             * THIS VARIABLE BELOW IS MOST LIKELY NEVER TO BE USED
             * SO I MAY REMOVE IT IN THE FUTURE.
             */
            int current_lvl = if_lvl;
        }
    }
}

char *parse(char *code)
{

}