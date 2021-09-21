<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <title></title>
    </head>
    <body>

        <?php
            $index = 1;
            while($index <= 5){
                echo "$index <br>";
                $index++;
            }

            do{
                echo "$index <br>";
                $index--;
            }while($index <= 1)
        ?>

    </body>
</html>