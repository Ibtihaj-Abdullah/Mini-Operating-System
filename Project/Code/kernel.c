#include "include/screen.h"
#include "include/string.h"
#include "include/kb.h"
kmain()
{
        clearScreen();
        print("Hello! This is my Operating System!");
        while (1)
        {
                print("\nEbtihajO");
                string ch = readStr();
                if (strEql(ch, "cmd"))
                {
                        print("\nIn CMD\n");
                }
                else if (strEql(ch, "clear"))
                {
                        clearScreen();
                }
                else
                {
                        print("\nBad Command!\n");
                }
                print("\n");
        }
}
