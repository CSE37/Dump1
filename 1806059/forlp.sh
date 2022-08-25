read a
read b
echo operator
read variable
case $variable in
1) echo `expr $a + $b`;;
2) echo `expr $a - $b`;;
*) echo invalid option
esac
