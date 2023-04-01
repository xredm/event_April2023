print "Enter a string: ";
$string = <STDIN>;
chomp($string);
$string =~ s/[^a-zA-Z0-9]//g;
$string = lc($string);
$reverse = reverse($string);
if ($string eq $reverse) {
    print "The string is a palindrome!\n";
}else {
    print "The string is not a palindrome.\n";
}