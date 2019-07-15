# Synthetic Data Generation Bot

```
set_level(choose_one(EXPERT, PROFESSIONAL, PROFESSIONAL|EXPERIENCE, NOVICE));
set_scenario(EDURange.FIREWALL); //specifiies PROBABILITY_NEW and CMDS set.
while (true)
   prev_time = command.timestamp;
   generate_pause(); //appropriate ranges set from the exercise scenario and level
   timestamp = current_time(NOW);
   terminal = select_existing_or_new_terminal(PROBABILITY_NEW);
   command = select_command(draw_from_set(CMDS));
   command.timestamp = timestamp;
   icar = command.timestamp = prev_time; // inter-command arrival time
   args = generate_args(command);
   terminal.execute(command); //EDURange logs event and output
   bot.record(timestamp, terminal.id, command, command.args, command.ret, command.stdout, command.stderr, icar);
```
