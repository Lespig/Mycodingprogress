<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <title></title>
    </head>
    <body>

        <form action="PostVsGet.php" method="get">
            Username: <input type="text" name="username"> <br>
            <input type="submit">
        </form>
        <br><br>
        <form action="PostVsGet.php" method="post">
            Password: <input type="password" name=password> <br>
            <input type="submit">
        </form>
        <br><br>

        <?php
            echo $_POST["password"]
        ?>
    </body>
</html>