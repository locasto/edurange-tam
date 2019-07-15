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

Are there other broad signals we expect beginners, professionals, and experts to give off as they engage with the scenario? If so, are we currently observing them? If not, are they easy to observe? For example, we have:

## Direct Variables:

1. Terminal Number / Session ID of a command (a type of context)
2. Command / Unix program name
3. Command arguments
4. Timestamp when command was issued
5. Return value of command
6. Output of command (error msgs & potentially unstructured data)

## Derived Variables:

1. Inter-command time
2. Command category / type (e.g., reading documentation vs. editing file vs. direct operation of a relevant utility like iptables or tcpdump)
3. argument ordering (own preference, or strict accordance w/ man page?)
4. consistency of argument ordering (does it change over time?)
5. Multiple terminal use or not (binary signal: Y/N)
6. Sequencing of Terminals / Sessions: which contexts do they engage with

## What we don't have but may need (some of which may be too much effort to measure or acquire)

1. Input typed into an editor
2. keypresses & typing rate
3. audio / thinking out loud
4. eye / gaze tracking
5. written notes
6. mouse movements
7. screenshots (for, e.g., GUI state)
8. kernel log messages
9. pcaps of traffic
10. application logs (e.g., ssh -vvv output)


# Bot

Need a data generator bot.

>>>
set_challenge(EDURange.FIREWALL); //specifiies PROBABILITY_NEW and CMDS set.
while (true)
   terminal = select_existing_or_new_terminal(PROBABILITY_NEW);
   command = select_command(draw_from_set(CMDS));
   args = generate_args(command);
   terminal.execute(command); //EDURange logs event and output
   bot.record(timestamp, terminal.id, command, command.args, command.ret);
>>>
