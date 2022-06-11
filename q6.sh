hell.sh:
#!/bin/sh
PS1="~>"
printf "%s " $PS1
read -r command
while [ "$command" != "quit" ]
do
  $command
  printf "%s " $PS1
  read -r command
done