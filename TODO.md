# TAM TODO List

0. Finish scenario description.
1. Write tests
2. Create PoC recognizer system
3. Write design notes for TAM PoC
4. Begin specification of tagged assessment model event sequences for different categories: 
(NOVICE, NON-DOMAIN PROFESSIONAL, DOMAIN PROFESSIONAL, EXPERT). Perform a “paper execution” of the scenario at three anticipated levels of expertise: beginner, professional, expert. Document paths.

Assume input stream is a sequence of Unix 
commands and their arguments, reflecting which 
commands a student or team has executed.

For example:
[timestamp,terminal identifier,command+args,command return value]

```
1559159730,terminal1,man iptables,ret
1559159795,terminal1,sudo tcpdump -i en0 -n -v
1559159796,terminal2,iptables -L,ret
1559159798,terminal3,ssh alice,ret
1559159801,terminal3,exit,ret
1559159810,terminal2,iptables -F,ret
1559159845,terminal2,sudo iptables -F,ret
1559159850,terminal3,ssh alice,ret
1559159855,terminal1,Ctrl+C,ret
```
