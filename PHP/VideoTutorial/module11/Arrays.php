<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <title></title>
    </head>
    <body>

        <?php
            $friends =  array("Kevin", "Karen", "Oscar", "Jim");
            echo $friends;
            echo $friends[0];
            echo $friends[1];
            echo $friends[2];
            echo $friends[3];
            $friends[0] = 400;
            $friends[1] = "Dwight";
            $friends[4] = "Angela";
            echo $friends[0];
            echo $friends[1];
            echo $friends[2];
            echo $friends[3];
            echo $friends[4];
            echo count($friends);
            $friends[5] = "Mike";
            echo $friends[5];
            echo count($friends);
        ?>

    </body>
</html>