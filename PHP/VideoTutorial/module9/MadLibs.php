<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <title></title>
    </head>
    <body>



        <form action="MadLibs.php" method="get">
            Noun1: <input type="text" name="noun1"> <br>
            Person: <input type="text" name="person"> <br>
            Verb1: <input type="text" name="verb1"> <br>
            BodyParts1: <input type="text" name="bodyparts1" <br>
            Adj1: <input type="text" name="adj1"> <br>
            Noun2: <input type="text" name="noun2"> <br>
            Noun3: <input type="text" name="noun3"> <br>
            PluralNoun1: <input type="text" name="pluralnoun1"> <br>
            Liquid: <input type="text" name="liquid"> <br>
            Adj2: <input type="text" name="adj2"> <br>
            Noun4: <input type="text" name="noun4"> <br>
            Noun5: <input type="text" name="noun5"> <br>
            Noun6: <input type="text" name="noun6"> <br>
            PluralNoun2: <input type="text" name="pluralnoun2"> <br>
            FemalePerson: <input type="text" name="femaleperson" <br>
            Noun7: <input type="text" name="noun7"> <br>
            BodyParts2: <input type="text" name="bodyparts2" <br>
            <input type="submit">
        </form>
        <br><br>

        <?php
            $noun1 = $_GET["noun1"];
            $person = $_GET["person"];
            $verb1 = $_GET["verb1"];
            $bodyparts1 = $_GET["bodyparts1"];
            $adj1 = $_GET["adj1"];
            $noun2 = $_GET["noun2"];
            $noun3 = $_GET["noun3"];
            $pluralnoun1 = $_GET["pluralnoun1"];
            $liquid = $_GET["liquid"];
            $adj2 = $_GET["adj2"];
            $noun4 = $_GET["noun4"];
            $noun5 = $_GET["noun5"];
            $noun6 = $_GET["noun6"];
            $pluralnoun2 = $_GET["pluralnoun2"];
            $femaleperson = $_GET["femaleperson"];
            $noun7 = $_GET["noun7"];
            $bodyparts2 = $_GET["bodypart2"];
            echo "It was Thanksgiving, and the scent of succulent roast " + $noun1 + " wafted through my house. <br>";
            echo "\"" + $person + ", it's time to " + $verb + " !\" my mother called. <br>";
            echo "I couldn't wait to get my " + $bodyparts1 + " on that " + $adj1 + " Thankgiving meal. <br>";
            echo "My family sat around the dining-room " + $noun2 + " . <br>";
            echo "The table was laid out with every kind of " + $noun3 + " imaginable. <br>";
            echo "There was a basket of hot buttered " + $pluralnoun1 + " and glasses of sparkling " + $liquid + " . <br>";
            echo "The " + $adj2 + " turkey sat, steaming, next to a tureen of " + $noun4 + " gravy. <br>";
            echo "A bowl of ruby-red " + $noun5 + " sauce, a sweet-" + $noun6 + " casserole, and a dish of mashed " + $pluralnoun2 + " tempted my taste buds. <br>";
            echo "But the dish I looked forward to most was Grandma " + $femaleperson + "'s famous " + $noun7 + "pie. <br>";
            echo "Thanksgiving is my favorite holiday, " + $bodyparts2 + " down. <br>";
        ?>
    </body>
</html>