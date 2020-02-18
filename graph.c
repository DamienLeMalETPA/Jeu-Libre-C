#include <stdio.h>
int main()
{
  char p[] = "0;44";
  char e[] = "0;101";
  char t[] = "1;91";
    //Regular text
    printf("┌───────────────────────────────────────────────────────────────┐\n"
     "│·      ·         ·       ·       ·        ·     ·        ·     │\n"
     "│   ·      \e[%sm▄█▒▓▓▄\e[0m    \e[%sm■\e[0m            ·    ·       ·      ·         │\n"
     "│·     \e[%sm■\e[0m  \e[%sm▓▒░▒░▓▒█\e[0m        ·               ·     ·      ·      · │\n"
     "│       · \e[%sm█░▒█▒▒░▓\e[0m       ·       ·     ·         ·       ·      │\n"
     "│   ·  \e[%sm■\e[0m   \e[%sm▀▓░▒█▀\e[0m  ·        ·       ·       ·        ·      ·   │\n"
     "│       ·       ·      ·       ·   ·      ·   ·     ·      ·    │\n"
     "│   ·       ·    ▄▄▄·            ·    ·          ·      ·     · │\n"
     "│       ·      ▀▀█\e[%sm▒░\e[0m█▀       ·   ·     ·    ·   ▄█\e[%sm░░\e[0m█▄        · │\n"
     "│·    ·     ·   · █\e[%sm▒░\e[0m█▀  ·    ·        ▄▄█████▄█\e[%sm░\e[0m█▀▀█\e[%sm░\e[0m█▄\e[%sm▓▓▓\e[0m■ ·  │\n"
     "│   ·     ·  ·  ███\e[%sm▓▒░\e[0m█         ·   ·   · ▀■█▀█■▀■▄▄■▀▀█▄▄  ·   │\n"
     "│       ■■■■█████\e[%sm▓▓▒▒▒░\e[0m█   ·     ·        ▄■█▄█■▄■▀▀■▄▄█▀▀·    ·│\n"
     "│·    ·  ·      ███\e[%sm▓▒░\e[0m█        ·     · ▀▀█████▀█\e[%sm░\e[0m█▄▄█\e[%sm░\e[0m█▀\e[%sm▓▓▓\e[0m■ ·  │\n"
     "│   ·   ·   ·     █\e[%sm▒░\e[0m█▄    ·      ·      ·      ▀█\e[%sm░░\e[0m█▀  ·     · │\n"
     "│     ·    ·   ▄▄█\e[%sm▒░\e[0m█▄   ·   ·     ·     ·   ·       ·     ·    │\n"
     "│·  ·   ·    ·   ▀▀▀·      ·      ·      ·   ·    ·       ·     │\n"
     "└───────────────────────────────────────────────────────────────┘\n",&t[0],&t[0],&t[0],&t[0],&t[0],&t[0],&t[0],&p[0],&e[0],&p[0],&e[0],&e[0],&e[0],&p[0],&p[0],&p[0],&e[0],&e[0],&e[0],&p[0],&e[0],&p[0]);
    printf("┌───────────────────────────────────────────────────────────────┐\n"
     "│·      ·   ·     ·   ·   ·       ·        ·     ·        ·     │\n"
     "│   ·          ·                ·    ·       ·      ·           │\n"
     "│·     ·     ·      ·     ·               ·     ·      ·      · │\n"
     "│       ·      ·        ·       ·     ·          ·       ·      │\n"
     "│   ·       ·      ·        ·       ·     ·   ·      ·      ·   │\n"
     "│       ·       ·      ·       ·   ·       ·      · ·      ·    │\n"
     "│   ·       ·    ▄▄▄·            ·    ·                ·     ·  │\n"
     "│       ·      ▀▀█\e[%sm▒░\e[0m█▀         ·     ·     ·   ▄█\e[%sm░░\e[0m█▄       ·   │\n"
     "│·    ·     ·   · █\e[%sm▒░\e[0m█▀  ·   ·        ▄▄█████▄█\e[%sm░\e[0m█▀▀█\e[%sm░\e[0m█▄\e[%sm▓▓▓\e[0m■   · │\n"
     "│   ·     ·  ·  ███\e[%sm▓▒░\e[0m█        ·   ·   · ▀■█▀█■▀■▄▄■▀▀█▄▄      ·│\n"
     "│       ■■■■█████\e[%sm▓▓▒▒▒░\e[0m█   ·     ·       ▄■█▄█■▄■▀▀■▄▄█▀▀·      │\n"
     "│·    ·  ·      ███\e[%sm▓▒░\e[0m█         ·   · ▀▀█████▀█\e[%sm░\e[0m█▄▄█\e[%sm░\e[0m█▀\e[%sm▓▓▓\e[0m■  ·  │\n"
     "│   ·   ·   ·     █\e[%sm▒░\e[0m█▄    ·       ·       ·   ▀█\e[%sm░░\e[0m█▀           │\n"
     "│     ·    ·   ▄▄█\e[%sm▒░\e[0m█▄   ·   ·       ·   ·   ·       ·     ·    │\n"
     "│·  ·   ·    ·   ▀▀▀·      ·      ·      ·   ·    ·       ·     │\n"
     "└───────────────────────────────────────────────────────────────┘\n",&p[0],&e[0],&p[0],&e[0],&e[0],&e[0],&p[0],&p[0],&p[0],&e[0],&e[0],&e[0],&p[0],&e[0],&p[0]);
    printf("┌───────────────────────────────────────────────────────────────┐\n"
     "│·      ·   ·     ·   ·   ·       ·        ·     ·        ·     │\n"
     "│   ·          ·    \e[1;90m■\e[0m          ·    ·       ·      ·\e[1;90m▀■\e[0m          │\n"
     "│·  \e[1;90m■\e[0m  ·     ·      ·     ·   \e[1;90m■▀\e[0m          ·     ·      ·      · │\n"
     "│       ·\e[1;90m▄██\e[0m    ·      ·       ·     ·          ·      ·\e[1;90m███\e[0m     │\n"
     "│   ·    \e[1;90m▀▀\e[0m   ·  \e[1;90m■\e[0m   ·        ·       ·   \e[1;90m██▄\e[0m ·        · \e[1;90m███\e[0m  · │\n"
     "│       ·       ·      ·       ·   ·    \e[1;90m ▀▀\e[0m   ·     ·      ·    │\n"
     "│   ·       ·    ▄▄▄·            ·      ·        ·      ·     · │\n"
     "│       ·      ▀▀█\e[%sm▒░\e[0m█▀      · \e[1;90m██\e[0m     ·     ·   ▄█\e[%sm░░\e[0m█▄       ·   │\n"
     "│·    ·     ·   · █\e[%sm▒░\e[0m█▀  ·     ·      ▄▄█████▄█\e[%sm░\e[0m█▀▀█\e[%sm░\e[0m█▄\e[%sm▓▓▓\e[0m■ ·   │\n"
     "│   ·     ·  ·  ███\e[%sm▓▒░\e[0m█          · ·   · ▀■█▀█■▀■▄▄■▀▀█▄▄   ·   │\n"
     "│       ■■■■█████\e[%sm▓▓▒▒▒░\e[0m█   ·    ·        ▄■█▄█■▄■▀▀■▄▄█▀▀·     ·│\n"
     "│·  \e[1;90m██\e[0m·  ·     ███\e[%sm▓▒░\e[0m█\e[0m      ·       · ▀▀█████▀█\e[%sm░\e[0m█▄▄█\e[%sm░\e[0m█▀\e[%sm▓▓▓\e[0m■  ·  │\n"
     "│   ·   ·   ·     █\e[%sm▒░\e[0m█▄    ·   \e[1;90m■\e[0m     ·   ·   · ▀█\e[%sm░░\e[0m█▀           │\n"
     "│     ·    ·   ▄▄█\e[%sm▒░\e[0m█▄   ·   ·     \e[1;90m██\e[0m·      ·   ·       ·    \e[1;90m■\e[0m  │\n"
     "│·  ·   ·    ·   ▀▀▀·      ·      ·  \e[1;90m▀\e[0m   ·   ·    ·       ·     │\n"
     "└───────────────────────────────────────────────────────────────┘\n",&p[0],&e[0],&p[0],&e[0],&e[0],&e[0],&p[0],&p[0],&p[0],&e[0],&e[0],&e[0],&p[0],&e[0],&p[0]);
    printf("┌───────────────────────────────────────────────────────────────┐\n"
       "│·      ·   \e[0;103m░\e[0m  \e[0;103m░░▒▒▓▒█▓▓█▓▓█▓█████▓███▓██▓██▒▓▓░▒░░\e[0m  \e[0;103m▒\e[0m ·     ·  │\n"
       "│   ·         \e[0;103m░\e[0m \e[0;103m▒░▒░▓▒▓▒▓▓█▓▓██▓████▓███▓██▒▓▒░▒░▒ \e[0;103m▒\e[0m ·    ·     │\n"
       "│·     ·          \e[0;103m░░▒░▒▓▒▒▓▓█▒▓██▓▓█▓▓█▓▒▓▒░▒░▒░\e[0m         ·    · │\n"
       "│       ·         \e[0;103m░\e[0m   \e[0;103m░░▒░▒░▒▓▒▓█▒▓▒█▓▒▓▒█▓▒▓▒░░\e[0m \e[0;103m░\e[0m \e[0;103m░\e[0m   ·        │\n"
       "│   ·       ·       \e[0;103m▒\e[0m  \e[0;103m░░▒▒░▒░▒░▒▒░▒▓▒░▒▒░░\e[0m             ·    ·  │\n"
       "│       ·       ·     \e[0;103m░\e[0m   \e[0;103m▒▒░▒░░▒░▒░░▒░░░\e[0m   \e[0;103m▒\e[0m      ·      ·     │\n"
       "│   ·       ·    ▄▄▄·       \e[0;103m░\e[0m  \e[0;103m░\e[0m             ·          ·     · │\n"
       "│       ·      ▀▀█\e[%sm▒░\e[0m█▀                    ·    ▄█\e[%sm░░\e[0m█▄       ·  │\n"
       "│·    ·     ·   · █\e[%sm▒░\e[0m█▀  ·       ·      ▄▄█████▄█\e[%sm░\e[0m█▀▀█\e[%sm░\e[0m█▄\e[%sm▓▓▓\e[0m■ ·  │\n"
       "│   ·     ·  ·  ███\e[%sm▓▒░\e[0m█      ·   ·  ·   · ▀■█▀█■▀■▄▄■▀▀█▄▄  ·   │\n"
       "│       ■■■■█████\e[%sm▓▓▒▒▒░\e[0m█   ·        ·    ▄■█▄█■▄■▀▀■▄▄█▀▀·    ·│\n"
       "│·    ·  ·      ███\e[%sm▓▒░\e[0m█        ·     · ▀▀█████▀█\e[%sm░\e[0m█▄▄█\e[%sm░\e[0m█▀\e[%sm▓▓▓\e[0m■ ·  │\n"
       "│   ·   ·   ·     █\e[%sm▒░\e[0m█▄    ·     ·    ·   ·    · ▀█\e[%sm░░\e[0m█▀          │\n"
       "│     ·    ·   ▄▄█\e[%sm▒░\e[0m█▄   ·   ·     ·     ·   ·       ·     ·    │\n"
       "│·  ·   ·    ·   ▀▀▀·      ·      ·      ·   ·    ·       ·     │\n"
       "└───────────────────────────────────────────────────────────────┘\n",&p[0],&e[0],&p[0],&e[0],&e[0],&e[0],&p[0],&p[0],&p[0],&e[0],&e[0],&e[0],&p[0],&e[0],&p[0]);
     return 0;
}