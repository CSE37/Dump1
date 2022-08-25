 echo `enter first no.`
 read a
 echo `enter second no.`
 read b
 c=`expr $a + $b`
 echo `the addtion is` $c
 a=`expr $c - $a`
 b=`expr $c - $a`
 echo $a 
 echo $b
 
