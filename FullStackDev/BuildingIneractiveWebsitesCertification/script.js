const flattenObjectValuesIntoArray = (arrOfObjs) => {
    let flattenedObj;
    const flattenedObjsArr = [];
    for (let obj = 0; obj < arrOfObjs.length; obj++) {
      const objValues = Object.values(arrOfObjs[obj]);
      flattenedObj = [...objValues.flat()]
      flattenedObjsArr.push(flattenedObj)
    }
    return flattenedObjsArr;
  };

    // Structure filtered books as HTML and return
    const structureBookAsHtml = (book) => {
      const bookDiv = document.createElement("div");
      bookDiv.setAttribute('class', 'bookDiv');
      
      const bookTitle = document.createElement("h2");
      bookTitle.innerHTML = book.title;
      bookTitle.setAttribute('class', 'bookTitle');
    
      const bookAuthor = document.createElement("h3");
      bookAuthor.innerHTML = book.author;
    
      const bookTags = document.createElement("p");
      bookTags.innerHTML = book.tags.join(", ");
    
      bookDiv.append(bookTitle, bookAuthor, bookTags);
      
      return bookDiv;
    };

  // list of books
  const booklist = [
    {
      title: "The City We Became",
      author: "N. K. Jemisin",
      tags: ["fantasy", "fiction", "afrofutursim", "science fiction", "sci-fi"]
    },
    {
      title: "The Catcher in the Rye",
      author: "J. D. Salinger",
      tags: ["fiction", "young adult", "YA", "realism", "coming of age", "classic"]
    },
    {
      title: "The Hundred Thousand Kingdoms",
      author: "N. K. Jemisin",
      tags: ["fantasy", "fiction", "adventure", "series"]
    },
    {
      title: "Sapiens: A Brief History of Humankind",
      author: "Yuval Noah Harari",
      tags: ["nonfiction", "history", "anthropology", "science", "sociology"]
    },
    {
      title: "Behave: The Biology of Humans at Our Best and Worst",
      author: "Robert M. Sapolsky",
      tags: ["nonfiction", "anthropology", "science", "sociology", "biology"]
    },
    {
      title: "The Parable of the Talents",
      author: "Octavia Butler", 
      tags: ["fiction", "dystopian", "science fiction"]
    },
    {
      title: "1984",
      author: "George Orwell", 
      tags: ["fiction", "dystopian", "science fiction", "classics", "adult"]
    },
    {
      title: "Remarkably Bright Creatures",
      author: "Shelby Van Pelt",
      tags: ["fiction", "mystery", "magical realism"]
    },
    {
      title: "Crying in H Mart",
      author: "Michelle Zauner",
      tags: ["memoir", "nonfiction", "autobiography"]
    },
    {
      title: "Wild: From Lost to Found on the Pacific Crest Trail",
      author: "Cheryl Strayed",
      tags: ["nonfiction", "memoir", "adventure", "travel"]
    }
  ]
/*
// Click handler for search button
const captureSearchValue = () => {
    return document.getElementById('search-bar').value
   };
*/
   
   // Filter books based on search input
   const filterBooks = (string, books) => {
    const matchingbooks = [];
    let flatternedBook = flattenObjectValuesIntoArray(books);
     for(let book = 0; book < flatternedBook.length; book++){
       if(flatternedBook[book].includes(string)){
        matchingbooks.push(flatternedBook[book])
       }
     }
     return matchingbooks;
   };
   
   // Empty the book list container, iterate over list of filtered books, return list of books formatted as HTML using the function in `helper.js` 
   const structureBooksAsHtml = (books) => {
     const formattedBooks = [];
     for(let book = 0; book < books.length; book++){
       formattedBooks.push(structureBookAsHtml(books[book]));
     }
     return formattedBooks;
   };
   
   // Handler triggered when a user clickers the "Search" button. Chains previously defined functions together to filter books based on the search value, formats the books as HTML and renders them to the DOM
   const searchBtnClickHandler = () => {
     //const search = captureSearchValue();
   
     search = "fantasy"

     const filteredBooks = filterBooks(search, booklist);
   
     const formattedBooks = structureBooksAsHtml(filteredBooks);
   
     document.getElementById('booklist').innerHTML = "${formattedBooks}";
   }
   
/*
   // Grab search button from the DOM
   const searchBtn = document.getElementById('search-btn')
   
   // Attach an event listener to the search button
   searchBtn.addEventListener("click", () => { searchBtnClickHandler(books) });
   */

   searchBtnClickHandler();