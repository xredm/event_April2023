print "Enter a string: ";
$string = <STDIN>;
chomp($string);
$reverse = reverse($string);
if ($string eq $reverse) {
    print "The string is a palindrome!\n";
}else {
    print "The string is not a palindrome.\n";
}