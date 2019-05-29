# TAM TODO List

0. Finish scenario description.
1. Write tests
2. Create PoC recognizer system
3. Write design notes for TAM PoC
4. Begin specification of tagged assessment model event sequences for different categories: 
(NOVICE, NON-DOMAIN PROFESSIONAL, DOMAIN PROFESSIONAL, EXPERT)

Assume input stream is a sequence of Unix 
commands and their arguments, reflecting which 
commands a student or team has executed.

For example:
[terminal identifier,command+args,command return value]

```
terminal1,sudo tcpdump -i en0 -n -v
terminal2,iptables -L,ret
terminal3,ssh alice,ret
terminal3,exit,ret
terminal2,iptables -F,ret
terminal2,sudo iptables -F,ret
terminal3,ssh alice,ret
terminal1,Ctrl+C,ret
```
