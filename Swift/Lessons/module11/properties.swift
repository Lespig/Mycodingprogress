class Person {
    var name = ""
}

class BlogPost {

    // Computed property
    var fullTitle:String {

        // Check that title and author are not nil
        if title != nil && author != nil {
            return title! + "by " + author!.name
        }

        else if title != nil {
            return title!
        }

        else {
            return "No Title"
        }
    }

    var title:String?
    var body = ""
    var author:Person?
    var numberOfComments = 0

    func addComment() {
        var myComment = "Some comment"
        numberOfComments += 1
        print(body)
    }

    func shareArticle() {
        print(body)
    }

    func addUpCommentCounts() {
        // Do some calculations
        // Arrive at a result

        numberOfComments = 0
    }
}

let author = Person()
author.name = "Audrey Bell"

let myPost = BlogPost()
myPost.author = author
myPost.title = "Title of post"
print(myPost.fullTitle)

let myPostTwo = BlogPost()
myPostTwo.title = "Another Title"
myPostTwo.title