<?php
$even_numbers = [2,4,6,8,10,12,14,16,18,20];
for ($i = 0; $i < count($even_numbers); $i=$i+1) {
    $even_number = $even_numbers[$i];
    echo $even_number . "\n";
}

$odd_numbers = [1,3,5,7,9];
foreach ($odd_numbers as $odd_number) {
    echo $odd_number . "\n";
}
?>