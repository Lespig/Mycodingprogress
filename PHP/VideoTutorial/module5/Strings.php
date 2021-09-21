<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <title></title>
    </head>
    <body>

        <?php
        $phrase = "Giraffe Academy";
        echo strtolower($phrase);
        echo strtoupper("dog");
        echo strlen("dog");
        echo $phrase[1];
        echo "Mike"[0];
        $phrase[0] = "B";
        echo $phrase[0];
        echo str_replace("Giraffe", "Panda", $phrase);
        echo substr($phrase, 8, 3);
        ?>

    </body>
</html>