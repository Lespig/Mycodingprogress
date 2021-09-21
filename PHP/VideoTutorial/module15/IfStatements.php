<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <title></title>
    </head>
    <body>


        <?php
            $isMale = true;
            $isTall = false;
            if ($isMale && $isTall){
                echo "You are a tall male";
            } elseif($isMale && !$isTall) {
                echo "You are a short male";
            } elseif(!$isMale && $isTall) {
                echo "You are a tall female";
            } else {
                echo "You are neither a male or tall";
            }

            if ($isMale || $isTall){
                echo "You are qualified to work on this job";
            } else {
                echo "You are not qualified to work on this job";
            }

        ?>




    </body>
</html>