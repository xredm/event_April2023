<?php

$input = readline('Choose rock, paper, or scissors: ');
$input = strtolower($input);

$options = ["rock", "paper", "scissors"];
$com_random = array_rand($options);

if ($input == $options[$com_random]) {
    echo "No way! It's a tie! Computer also chose a $options[$com_random];D\n";
}
elseif (($input == "rock" && $options[$com_random] == "scissors") || ($input == "paper" && $options[$com_random] == "rock") ||
         ($input == "scissors" && $options[$com_random] == "paper")) {
            echo "Congratulations! You won! The computer chose $options[$com_random].\n";
         } else {
            echo "Sorry! You lost! The computer chose $options[$com_random].\n";
         }

echo $options[$com_random];

?>