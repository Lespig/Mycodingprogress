<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <title></title>
    </head>
    <body>

        <?php
            class Book {
                var $title;
                var $author;
                var $pages;

                function __construct($aTitle, $anAuthor, $Pages){
                    $this->title = $aTitle;
                    $this->author = $anAuthor;
                    $this->pages = $Pages;
                }
            }

            $book1 = new Book("Harry Potter", "JK Rowling", 400);
            $book2 = new Book("Lord of the Rings", "Tolkien", 700);
            $book3 = new Book("Twilight", "Suzanne Collins", 374);
            $book3->title = "The Hunger Games";

            echo $book1->title;
            echo $book1->author;
            echo $book1->pages;

            echo $book1->title;
            echo $book1->author;
            echo $book1->pages;

            echo $book1->title;
            echo $book1->author;
            echo $book1->pages;
        ?>


    </body>
</html>